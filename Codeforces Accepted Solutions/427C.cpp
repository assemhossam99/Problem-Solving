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

vector<int> graph[N], comps[N];
int dfsN[N], low[N], id = 1, compNum, cost[N];
bool vis[N], inStack[N];
stack<int> st;
void tarjan(int node)
{
    dfsN[node] = low[node] = id++;
    vis[node] = true;
    st.push(node);
    inStack[node] = true;
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child);
            low[node] = min(low[child], low[node]);
        }
        else if(inStack[child]) low[node] = min(low[node], dfsN[child]);
    }
    if(low[node] == dfsN[node])
    {
        compNum++;
        while(true)
        {
            int curNode = st.top();
            inStack[curNode] = false;
            st.pop();
            comps[compNum].push_back(cost[curNode]);
            if(curNode == node) break;
        }
    }
}

int main()
{
    assem99
    memset(dfsN, -1, sizeof dfsN);
    int n; cin>>n;
    for(int i = 1; i <= n; i++) cin>>cost[i];
    int m; cin>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
    }
    for(int i = 1; i <= n; i++) if(dfsN[i] == -1) tarjan(i);
    ll ways = 1, ans = 0;
    for(int i = 1; i <= compNum; i++)
    {
        int mn = oo, cnt = 0;
        for(int j = 0; j < sz(comps[i]); j++) mn = min(mn, comps[i][j]);
        for(int j = 0; j < sz(comps[i]); j++) cnt += (mn == comps[i][j]);
        ways = ((ways % MOD) * (cnt % MOD)) % MOD;
        ans += mn;
    }
    cout<<ans<<' '<<ways;

    return 0;
}