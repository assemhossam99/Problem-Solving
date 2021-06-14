#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
vector<int> graph[N];
ll cost[N], init[N], goal[N], fcost[N];
bool vis[N];
ll ans = 0;
ii type[N];
void dfs(int node, int parent)
{
    bool leaf = true;
    vis[node] = true;
    if(node != 1) fcost[node] = min(cost[node], fcost[parent]);
    for(int child : graph[node])
    {
        if(!vis[child])
        {
            leaf = false;
            dfs(child, node);
        }
    }
    if(init[node] != goal[node])
    {
        if(init[node]) type[node].F++;
        else type[node].S++;
    }
    type[parent].F += type[node].F;
    type[parent].S += type[node].S;
    if(!leaf)
    {
        ans += fcost[node] * min(type[node].F, type[node].S) * 2;
        type[parent].F -= min(type[node].F, type[node].S);
        type[parent].S -= min(type[node].F, type[node].S);
    }
}
 
int main()
{
    assem99
    int n; cin>>n;
    rep(i, 1, n + 1) cin>>cost[i]>>init[i]>>goal[i];
    rep(i, 1, n)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    fcost[1] = cost[1];
    dfs(1, 0);
    if(type[1].F != type[1].S) return cout<<"-1", 0;
    cout<<ans;
 
 return 0;
}
