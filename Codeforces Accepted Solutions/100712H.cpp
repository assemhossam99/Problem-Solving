#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

vector<int> graph[N], g[N];
bool vis[N], vis2[N];
int low[N], dfsN[N], id, start, mxLvl, comp[N];
set<pair<int, int>> bridges;
map<pair<int, int>, bool> mp;
void init(int n)
{
    mp.clear();
    mxLvl = -1;
    id = 0;
    bridges.clear();
    for(int i = 1; i <= n; i++)
    {
        comp[i] = -1;
        graph[i].clear();
        g[i].clear();
        vis[i] = false;
        vis2[i] = false;
    }
}

void tarjan(int node, int par = -1)
{
    vis[node] = true;
    low[node] = dfsN[node] = ++id;
    for(auto child : graph[node])
    {
        if(child == par) continue;
        if(vis[child]) low[node] = min(low[node], dfsN[child]);
        else
        {
            tarjan(child, node);
            low[node] = min(low[node], low[child]);
            if(low[child] > dfsN[node])
            {
                bridges.insert({node, child});
                mp[{node, child}] =  mp[{child, node}] = true;
            }
        }
    }
}
void dfs(int node)
{
    vis[node] = true;
    comp[node] = id;
    for(auto child : graph[node])
    {
        if(!vis[child] and !mp[{node, child}]) dfs(child);
    }
}

void dfs2(int node, int lvl = 0)
{
    if(lvl > mxLvl)
    {
        mxLvl = lvl;
        start = node;
    }
    vis2[node] = true;
    for(auto child : g[node]) if(!vis2[child]) dfs2(child, lvl + 1);
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        init(n);
        for(int i = 0; i < m; i++)
        {
            int u, v; cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        tarjan(1);
        id = 0;
        memset(vis, false, sizeof vis);
        if(bridges.empty()) cout<<0<<endll;
        else
        {
            for(int i = 1; i <= n; i++)
            {
                if(!vis[i])
                {
                    id++;
                    dfs(i);
                }
            }
            for(auto it : bridges)
            {
                g[comp[it.second]].push_back(comp[it.first]);
                g[comp[it.first]].push_back(comp[it.second]);
            }
            pair<int, int> s = *bridges.begin();
            dfs2(1);
            mxLvl = -1;
            memset(vis2, false, sizeof vis2);
            dfs2(start);
            cout<<sz(bridges) - mxLvl<<endll;
        }
    }


    return 0;
}