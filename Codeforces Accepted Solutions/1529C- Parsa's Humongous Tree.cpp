#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("intel.in","r",stdin); freopen("intel.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
pair<ll, ll> range[N];
vector<int> g[N];
ll dp[N][2];
 
ll dfs(int node, int par, int cur)
{
    if(node > 1e5) return 0;
    if(~dp[node][cur]) return dp[node][cur];
    ll ret = 0;
    for(auto child : g[node])
    {
        ll c = 0;
        if(child != par)
        {
            int add;
            if(cur) add = range[node].second;
            else add = range[node].first;
            c = max(c, dfs(child, node, 0) + abs(add - range[child].first));
            c = max(c, dfs(child, node, 1) + abs(add - range[child].second));
            ret += c;
        }
    }
    return dp[node][cur] = ret;
}
 
void pre(int n)
{
    for(int i = 1; i <= n; i++) dp[i][0] = dp[i][1] = -1;
    for(int i = 0; i <= n; i++) g[i].clear();
}
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        pre(n);
        for(int i = 1; i <= n; i++)
        {
            ll l, r; cin>>l>>r;
            range[i] = {l ,r};
        }
        for(int i = 1; i < n; i++)
        {
            int u, v; cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cout<<max(dfs(1, -1, 0), dfs(1, -1, 1))<<endl;
        //cout<<dp[1][1]<<' '<<dp[1][0]<<endl;
    }
 
    return 0;
}
