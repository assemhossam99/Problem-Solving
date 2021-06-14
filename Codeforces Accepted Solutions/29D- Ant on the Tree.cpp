#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
vector<int> g[305];
set<int> reach[305];
bool vis[305];
int arr[305], idx;
vector<int> vec;
 
set<int> dfs(int node, int par)
{
    for(auto child : g[node])
    {
        if(child != par)
        {
            set<int> st= dfs(child, node);
            for(auto it : st) reach[node].insert(it);
        }
    }
    return reach[node];
}
 
void dfs2(int node, int par)
{
    vis[node] = true;
    vec.push_back(node);
    if(node == arr[idx])
    {
        idx++;
        return;
    }
    A:;
    if(reach[node].find(arr[idx]) != reach[node].end())
    {
        for(auto child : g[node])
        {
            if(child != par and reach[child].find(arr[idx]) != reach[child].end())
            {
                if(vis[child])
                {
                    cout<<-1;
                    exit(0);
                }
                dfs2(child, node);
                vec.push_back(node);
                goto A;
            }
        }
    }
}
 
int main()
{
    Assem99
    int n; cin>>n;
    for(int i = 0; i < n - 1; i++)
    {
        int u, v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int leaves = 0;
    for(int i = 2; i <= n; i++)
    {
        if(sz(g[i]) == 1) leaves++;
    }
    for(int i = 0; i < leaves; i++) cin>>arr[i];
    for(int i = 1; i <= n; i++) reach[i].insert(i);
    dfs(1, -1);
    dfs2(1, -1);
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
