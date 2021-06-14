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
 
vector<int> g[N];
int in[N], e;
bool vis[N];
vector<pair<int, int>> cmp;
 
void dfs(int node)
{
    if(vis[node])
    {
        e = node;
        return;
    }
    vis[node] = true;
    for(auto child : g[node]) dfs(child);
}
 
int main()
{
    Assem99
    int n; cin>>n;
    int arr[n + 5];
    for(int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        in[arr[i]]++;
        g[i].push_back(arr[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        if(!in[i])
        {
            int start = i;
            e = i;
            dfs(i);
            cmp.push_back({start, e});
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            int start = i;
            e = i;
            dfs(i);
            cmp.push_back({start, e});
        }
    }
    if(sz(cmp) == 1 && cmp[0].first == cmp[0].second) return cout<<0, 0;
    cout<<sz(cmp)<<endl;
    for(int i = 0; i < sz(cmp); i++)
    {
        int from = i, to = i + 1;
        if(to == sz(cmp)) to = 0;
        cout<<cmp[from].second<<' '<<cmp[to].first<<endl;
    }
 
    return 0;
}
