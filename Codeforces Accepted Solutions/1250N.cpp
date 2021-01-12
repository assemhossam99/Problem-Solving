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

map<int, vector<pair<int, int>>> graph;
vector<pair<int, int>> edges;
map<int, int> vis;
int scc = 0, last;

void init()
{
    vis.clear();
    graph.clear();
    edges.clear();
    scc = 0;
}
void dfs(int node)
{
    last = node;
    vis[node] = 1;
    for(auto child : graph[node]) if(!vis[child.first]) dfs(child.first);
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        vector<int> vec;
        init();
        int n; cin>>n;
        for(int i = 0; i < n; i++)
        {
            int u, v; cin>>u>>v;
            graph[u].push_back({v, i + 1});
            graph[v].push_back({u, i + 1});
            edges.push_back({u, v});
        }
        for(auto it : edges)
        {
            if(!vis[it.first]) dfs(it.first), vec.push_back(last), scc++;
            else if(!vis[it.second]) dfs(it.second), vec.push_back(last), scc++;
        }
        cout<<scc - 1<<endll;
        int node = vec[0];
        for(int i = 1; i < sz(vec); i++)
        {
            cout<<graph[vec[i]][0].second<<' ';
            cout<<vec[i]<<' '<<graph[node][0].first<<endll;
        }
    }

    return 0;
}