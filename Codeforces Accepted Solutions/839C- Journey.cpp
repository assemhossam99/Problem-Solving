#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
vector<int> graph[N];
bool vis[N];
ld dfs(int node, int p)
{
   ld sum = 0;
   for(int child : graph[node])
   {
       if(child != p) sum += (dfs(child, node) + 1);
   }
   return sum ? sum / (sz(graph[node]) - (p != -1)) : 0;
}
 
int main()
{
    assem99
    int n; cin>>n;
    for(int i = 1; i < n; i++)
    {
        int u, v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    ld ans = dfs(1, -1);
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}
