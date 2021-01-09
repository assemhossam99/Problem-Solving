#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5, oo = 1e9;
const int mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;

int n, m, dfsn[N], low[N], id, compNum;
vector<int> graph[N];
bool vis[N], inStack[N];
stack<int> st;

void init()
{
    id = 1, compNum = 0;
    memset(vis, 0, sizeof vis);
    memset(inStack, 0, sizeof inStack);
    for(int i = 0; i < N; i++) graph[i].clear();
}

void tarjan(int node)
{
    dfsn[node] = low[node] = id++;
    vis[node] = true;
    inStack[node] = true;
    st.push(node);
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child);
            low[node] = min(low[node], low[child]);
        }
        else if(inStack[child]) low[node] = min(low[node], dfsn[child]);
    }
    if(low[node] == dfsn[node])
    {
        compNum++;
        while(true)
        {
            int cur = st.top();
            st.pop();
            inStack[cur] = false;
            if(cur == node) break;
        }
    }
}

int main()
{
    assem99
    while (cin>>n>>m)
    {
        if(!n and !m) break;
        init();
        for(int i = 0; i < m; i++)
        {
            int u, v, p; cin>>u>>v>>p;
            graph[u].push_back(v);
            if(p == 2) graph[v].push_back(u);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i]) tarjan(i);
        }
        cout<<(compNum == 1 ? 1 : 0)<<endll;
    }

    return 0;
}