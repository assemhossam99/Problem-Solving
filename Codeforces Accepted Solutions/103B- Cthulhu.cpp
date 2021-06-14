#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
set<int> g[N];
vector<int> graph[N];
bool vis[N], ok = true;
 
void dfs(int node, int par)
{
    vis[node] = true;
    for(auto child : graph[node])
    {
        if(!vis[child]) dfs(child, node);
    }
}
 
int main()
{
    Assem99
    int n, m; cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        g[u].insert(v);
        g[v].insert(u);
    }
    for(int i = 1; i <= n; i++)
    {
        if(sz(g[i]) == 1)
        {
            vis[i] = true;
            int child = *g[i].begin();
            g[i].erase(g[i].begin());
            g[child].erase(i);
            while(sz(g[child]) == 1)
            {
                vis[child] = true;
                int node = child;
                child = *g[node].begin();
                g[child].erase(node);
                g[node].erase(child);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(sz(g[i]))
        {
            for(auto it : g[i])
            {
                graph[it].push_back(i);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        //if(!vis[i]) cout<<i<<' '<<sz(graph[i])<<endl;
        if(!vis[i] && sz(graph[i]) & 1) ok = false;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i] && sz(graph[i]) > 0)
        {
            dfs(i, 0);
            break;
        }
    }
    if(!ok) return cout<<"NO", 0;
    for(int i = 1; i <= n; i++) if(!vis[i]) return cout<<"NO", 0;
    cout<<"FHTAGN!";
 
    return 0;
}
