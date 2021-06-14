#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
vector<pair<int, int>> graph[N];
int mx = 0;
bool vis[N];
int dfs(int node, int parent)
{
    int ans = 0;
    vis[node] = 1;
    for(pair<int, int> child : graph[node]) if(child.first != parent) ans = max(ans, dfs(child.first, node) + child.second);
    return ans;
}
 
int main()
{
    assem99
    int n; cin>>n;
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        int u, v, c; cin>>u>>v>>c;
        ans += c;
        graph[u].push_back({v, c});
        graph[v].push_back({u, c});
    }
    cout<<(ans * 2 - dfs(1, 1));
 
    return 0;
}
