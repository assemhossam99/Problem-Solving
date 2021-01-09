#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 5e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

vector<int> graph[N];
vector<pair<int, int>> vec;
bool vis[N], vis2[N];
int cnt;
void dfs(int node)
{
    vis[node] = true;
    for(auto child : graph[node]) if(!vis[child]) dfs(child);
}

void dfs2(int node)
{
    cnt++;
    vis2[node] = true;
    for(auto child : graph[node])
    {
        if(!vis2[child])
        {
            dfs2(child);
        }
    }
}

int main()
{
    assem99
    int n, m, s; cin>>n>>m>>s;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
    }
    dfs(s);
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            cnt = 0;
            memset(vis2, false, sizeof vis2);
            dfs2(i);
            vec.push_back({cnt, i});
        }
    }
    sort(vec.rbegin(), vec.rend());
    int ans = 0;
    for(auto it : vec)
    {
        if(!vis[it.second])
        {
            ans++;
            dfs(it.second);
        }
    }
    cout<<ans;


    return 0;
}