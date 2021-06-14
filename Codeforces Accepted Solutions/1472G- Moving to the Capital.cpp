#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
int dist[N], dp[N];
bool vis[N], vis2[N];
void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        graph[i].clear();
        dist[i] = 0;
        vis[i] = false;
        dp[i] = 0;
        vis2[i] = false;
    }
}
void bfs()
{
    vis[1] = true;
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    while (q.size())
    {
        int node = q.front();
        q.pop();
        for(auto child : graph[node])
        {
            if(!vis[child])
            {
                vis[child] = true;
                dist[child] = dist[node] + 1;
                q.push(child);
            }
        }
    }
}
 
void dfs(int node)
{
    vis2[node] = true;
    dp[node] = dist[node];
    for(auto child : graph[node])
    {
        if(!vis2[child] and dist[node] < dist[child]) dfs(child);
        if(dist[node] < dist[child]) dp[node] = min(dp[node], dp[child]);
        else dp[node] = min(dp[node], dist[child]);
    }
}
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        init(n);
        for(int i = 0; i < m; i++)
        {
            int u, v; cin>>u>>v;
            graph[u].push_back(v);
        }
        bfs();
        dfs(1);
        for(int i = 1; i <= n; i++) cout<<dp[i]<<' ';
        cout<<endll;
    }
 
 
    return 0;
}
