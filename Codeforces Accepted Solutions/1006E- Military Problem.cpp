#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
vector<int> g[N], vec;
bool vis[N];
int children[N];
 
int dfs(int node)
{
    vis[node] = true;
    vec.push_back(node);
    children[node] = 1;
    for(auto child : g[node]) if(!vis[child]) children[node] += dfs(child);
    return children[node];
}
 
int main()
{
    Assem99
    int n, q; cin>>n>>q;
    for(int i = 2; i <= n; i++)
    {
        int a; cin>>a;
        g[a].push_back(i);
        g[i].push_back(a);
    }
    //for(int i = 1; i <= n; i++) if(sz(g[i])) sort(g[i].begin(), g[i].end());
    dfs(1);
    map<int, int> mp;
    for(int i = 0; i < sz(vec); i++) mp[vec[i]] = i;
    while(q--)
    {
        int u, k; cin>>u>>k;
        if(children[u] < k) cout<<-1<<endl;
        else
        {
            int idx = mp[u];
            cout<<vec[idx + k - 1]<<endl;
        }
    }
 
    return 0;
}
