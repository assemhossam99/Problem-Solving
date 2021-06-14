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
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int n, m;
bool vis[N];
vector<int> graph[N];
stack<int> stk;
void dfs(int node)
{
    vis[node] = 1;
    for(auto child : graph[node]) if(!vis[child]) dfs(child);
    stk.push(node);
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        rep(i, 0, n + 1) graph[i].clear();
        rep(i, 0, n + 5) vis[i] = 0;
        vii vec;
        rep(i, 0, m)
        {
            int d, u, v; cin>>d>>u>>v;
            if(d) graph[u].push_back(v);
            vec.push_back(ii(u, v));
        }
        rep(i, 1, n + 1) if(!vis[i]) dfs(i);
        vector<int> v;
        while(sz(stk))
        {
            v.push_back(stk.top());
            stk.pop();
        }
        int pos[n + 5];
        rep(i, 0, n) pos[v[i]] = i;
        bool ok = true;
        rep(i, 1, n + 1)
        {
            for(auto child : graph[i])
            {
                if(pos[i] > pos[child]) ok = false;
            }
        }
        if(!ok) cout<<"NO"<<endll;
        else
        {
            cout<<"YES"<<endll;
            for(auto it : vec)
            {
                if(pos[it.first] < pos[it.second]) cout<<it.first<<' '<<it.second<<endll;
                else cout<<it.second<<' '<<it.first<<endll;
            }
        }
    }
 
    return 0;
}
