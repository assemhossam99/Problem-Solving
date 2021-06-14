#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
vector<int> graph[N];
set<int> st;
bool vis[N];
int loop;
void init(int n)
{
    st.clear();
    loop = 0;
    for(int i = 0; i < N; i++)
    {
        vis[i] = false;
        graph[i].clear();
    }
}
void dfs(int node)
{
    vis[node] = true;
    st.insert(node);
    for(auto child : graph[node])
    {
        if(!vis[child] and child != node) dfs(child);
        else if(st.find(child) != st.end() and child != node)
        {
            loop++;
        }
    }
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        init(n);
        int ans = m;
        for(int i = 0; i < m; i++)
        {
            int u, v; cin>>u>>v;
            if(u == v) ans--;
            else graph[u].push_back(v);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!vis[i])
            {
                st.clear();
                dfs(i);
            }
        }
        cout<<ans + loop<<endll;
    }
 
    return 0;
}
