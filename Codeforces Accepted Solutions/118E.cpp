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

vector<int> graph[N];
vector<pair<int, int>> vec;
int low[N], dfsN[N], id = 1;
bool vis[N], inStack[N];

void tarjan(int node, int par)
{
    low[node] = dfsN[node] = id++;
    vis[node] = inStack[node] = true;
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            tarjan(child, node);
            low[node] = min(low[node], low[child]);
            if(low[child] > dfsN[node])
            {
                cout<<0;
                exit(0);
            }
            else vec.push_back({node, child});
        }
        else if(inStack[child] and child != par)
        {
            low[node] = min(low[node], dfsN[child]);
            if(dfsN[node] > dfsN[child]) vec.push_back({node, child});
        }
    }
}

int main()
{
    assem99
    int n, m; cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i]) tarjan(i, 0), cnt++;
    }
    if(cnt > 1) return cout<<0, 0;
    for(auto it : vec) cout<<it.first<<' '<<it.second<<endll;

    return 0;
}