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

vector<int> graph[N], g[N], comps[N];
int low[N], dfsN[N], id, comp[N], scc;
bool vis[N], inStack[N];
stack<int> st;

void tarjan(int node)
{
    low[node] = dfsN[node] = ++id;
    vis[node] = inStack[node] = true;
    st.push(node);
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child);
            low[node] = min(low[node], low[child]);
        }
        else if(inStack[node]) low[node] = min(low[node], dfsN[child]);
    }
    if(low[node] == dfsN[node])
    {
        scc++;
        while(true)
        {
            int cur = st.top();
            st.pop();
            inStack[cur] = false;
            comp[cur] = scc;
            comps[scc].push_back(cur);
            if(cur == node) break;
        }
    }
}

int main()
{
    assem99
    int n, m, h; cin>>n>>m>>h;
    int arr[n + 5];
    for(int i = 1; i <= n; i++) cin>>arr[i];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        if((arr[u] + 1) % h == arr[v]) graph[u].push_back(v);
        if((arr[v] + 1) % h == arr[u]) graph[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) if(!vis[i]) tarjan(i);
    for(int i = 1; i <= n; i++)
    {
        for(auto child : graph[i])
        {
            if(comp[i] != comp[child]) g[comp[i]].push_back(comp[child]);
        }
    }
    int mx = oo, com;
    for(int i = 1; i <= scc; i++)
    {
        if(sz(g[i])) continue;
        if(sz(comps[i]) < mx)
        {
            mx = sz(comps[i]);
            com = i;
        }
    }
    cout<<sz(comps[com])<<endll;
    for(auto it : comps[com]) cout<<it<<' ';
    return 0;
}