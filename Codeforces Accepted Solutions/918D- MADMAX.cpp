#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
vector<pair<int, int>> g[105];
int dp[105][105][30][2];
int solve(int i, int j, int last, int round)
{
    int &ans = dp[i][j][last][round];
    if(~ans) return ans;
    ans = false;
    if(!round)
    {
        for(auto child : g[i]) if(child.second >= last) ans |= !solve(child.first, j, child.second, !round);
    }
    else
    {
        for(auto child : g[j]) if(child.second >= last) ans |= !solve(i, child.first, child.second, !round);
    }
    return ans;
}
 
int main()
{
    Assem99
    memset(dp, -1, sizeof dp);
    int n, m; cin>>n>>m;
    for(int i = 0; i < m; i++)
    {
        int u, v;cin>>u>>v;
        char c; cin>>c;
        int C = c - 'a';
        g[u].push_back({v, C});
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(solve(i, j, 0, 0)) cout<<'A';
            else cout<<'B';
        }
        cout<<endll;
    }
 
    return 0;
}
