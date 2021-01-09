#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int n, k;
vector<int> graph[N], vec;
bool vis[N];
int sz[N];
int dfs(int node, int lvl)
{
    vis[node] = true;
    for(auto child : graph[node])
    {
        if(!vis[child])
        {
            sz[node] += dfs(child, lvl + 1) + 1;
        }
    }
    vec.push_back(sz[node] - lvl);
    return sz[node];
}

int main()
{
    assem99
    cin>>n>>k;
    for(int i = 1; i < n; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, 0);
    sort(vec.rbegin(), vec.rend());
    ll ans = 0;
    for(int i = 0; i < n - k; i++) ans += vec[i];
    cout<<ans;


    return 0;
}