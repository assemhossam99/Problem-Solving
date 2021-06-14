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
 
vector<int> graph[N];
int bib[N], st1, st2, ok = 1;
 
ll fp(ll b, ll p)
{
    if (p == 0)
        return 1;
    ll ans = fp(b, p / 2);
    ans = (ans * ans) % MOD;
 
    if (p % 2 != 0)
        ans = (ans *(b % MOD)) % MOD;
    return ans;
}
 
void clearGraph(int n)
{
    for(int i = 1; i <= n; i++) graph[i].clear();
}
 
void dfs(int node, int st)
{
    bib[node] = st;
    st1 += st == 0;
    st2 += st == 1;
    for(int child : graph[node])
    {
        if(bib[child] == -1) dfs(child, !st);
        else if(bib[child] != !st) ok = 0;
    }
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ll ans = 1;
        int n, m;  cin>>n>>m;
        ok = 1;
        for(int i = 1; i <= m; i++)
        {
            int u, v; cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for(int i = 1; i <= n; i++) bib[i] = -1;
        for(int i = 1; i <= n; i++)
        {
            if(bib[i] == -1)
            {
                st1 = st2 = 0;
                dfs(i, 0);
                ans = (ans * (fp(2, st1) + fp(2, st2)) % MOD) % MOD;
            }
        }
        cout<<(ok? ans : 0)<<endll;
        clearGraph(n);
    }
 
    return 0;
}
