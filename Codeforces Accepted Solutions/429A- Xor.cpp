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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
bool vis[N];
bool arr[N], goal[N];
vector<int> graph[N], ans;
void dfs(int node, int lvl, bool odd, bool even)
{
    if(lvl % 2 and odd) arr[node] = !arr[node];
    if(lvl % 2 == 0 and even) arr[node] = ! arr[node];
    vis[node] = true;
    if(arr[node] != goal[node])
    {
        ans.push_back(node);
        if(lvl % 2 == 0) even = !even;
        else odd = !odd;
    }
    for(int child : graph[node]) if(!vis[child]) dfs(child, lvl + 1, odd, even);
}
 
int main()
{
    assem99
    int n; cin>>n;
    rep(i, 0, n - 1)
    {
        int u, v; cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    rep(i, 1, n + 1) cin>>arr[i];
    rep(i, 1, n + 1) cin>>goal[i];
    dfs(1, 0, 0, 0);
    cout<<sz(ans)<<endl;
    rep(i, 0, sz(ans)) cout<<ans[i]<<endline;
 
 return 0;
}
