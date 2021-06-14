#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
bool vis[N];
int szs[N];
ll cnt;
vector<int> g[N], leaf;
 
void dfs(int node)
{
    if(szs[node] > 1) return;
    vis[node] = true;
    for(auto child : g[node])
    {
        if(!vis[child])szs[child]--;
        if(!vis[child] && szs[child] < 3)
        {
            dfs(child);
        }
    }
}
 
void dfs2(int node)
{
    cnt++;
    vis[node] = false;
    for(auto child : g[node]) if(vis[child]) dfs2(child);
}
 
void pre(int n)
{
    leaf.clear();
    cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        g[i].clear();
        szs[i] = 0;
        vis[i] = false;
    }
}
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        pre(n);
        for(int i = 0; i < n; i++)
        {
            int u, v; cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i = 1; i<= n; i++) szs[i] = sz(g[i]);
        for(int i = 1; i <= n; i++) if(sz(g[i]) == 1) leaf.push_back(i);
        for(int i = 1; i <= n; i++) szs[i] = sz(g[i]);
        for(int i = 0; i < sz(leaf); i++) if(~vis[leaf[i]]) dfs(leaf[i]);
        vector<int> nodes;
        ll ans = 0;
        for(int i = 1; i <= n; i++) if(!vis[i]) nodes.push_back(i);
        for(int i = 0; i < sz(nodes); i++)
        {
            cnt = 0;
            dfs2(nodes[i]);
            ans += ((cnt * (cnt - 1)) / 2);
            ans += (cnt * (n - cnt));
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
