#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int cost[N], low[N], dfsN[N], id, scc;
ll ans;
bool vis[N], inStack[N];
stack<int> st;
vector<int> graph[N];

void tarjan(int node)
{
    vis[node] = true;
    low[node] = dfsN[node] = ++id;
    st.push(node);
    inStack[node] = true;
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child);
            low[node] = min(low[node], low[child]);
        }
        else if(inStack[child]) low[node] = min(low[node], dfsN[child]);
    }
    if(low[node] == dfsN[node])
    {
        scc++;
        if(st.top() == node)
        {
            st.pop();
            inStack[node] = false;
        }
        else
        {
            int mn = oo;
            while(true)
            {
                int cur = st.top();
                st.pop();
                inStack[cur] = false;
                mn = min(mn, cost[cur]);
                if(cur == node) break;
            }
            ans += mn;
        }
    }
}

int main()
{
    assem99
    int n; cin>>n;
    for(int i = 1; i <= n; i++) cin>>cost[i];
    for(int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        if(a != i) graph[i].push_back(a);
    }
    for(int i = 1; i <= n; i++) if(!vis[i]) tarjan(i);
    for(int i = 1; i <= n; i++) if(graph[i].empty()) ans += cost[i];
    cout<<ans;

    return 0;
}