#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

stack<int> st;
vector<int> graph[N], g[N];
set<pair<int, int>> edges;
int low[N], dfsN[N], id, scc, comp[N], mxLvl = -1, start;
bool vis[N], inStack[N];

void tarjan(int node, int par)
{
    vis[node] = inStack[node] = true;
    low[node] = dfsN[node] = ++id;
    st.push(node);
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child, node);
            low[node] = min(low[node], low[child]);
        }
        else if(inStack[child] and child != par) low[node] = min(low[node], dfsN[child]);
    }
    if(low[node] == dfsN[node])
    {
        scc++;
        while(true)
        {
            int cur = st.top();
            st.pop();
            inStack[node] = false;
            comp[cur] = scc;
            if(cur == node) break;
        }
    }
}

void dfs(int node, int lvl)
{
    vis[node] = true;
    if(lvl > mxLvl)
    {
        mxLvl = lvl;
        start = node;
    }
    for(auto child : g[node]) if(!vis[child]) dfs(child, lvl + 1);
}

int main()
{
    assem99
    int n, m; cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        edges.insert({u, v});
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    tarjan(1, 0);
    for(auto it : edges)
    {
        if(comp[it.first] != comp[it.second])
        {
            g[comp[it.first]].push_back(comp[it.second]);
            g[comp[it.second]].push_back(comp[it.first]);
        }
    }
    memset(vis, false, sizeof vis);
    dfs(1, 0);
    mxLvl = -1;
    memset(vis, false, sizeof vis);
    dfs(start, 0);
    cout<<mxLvl;

    return 0;
}