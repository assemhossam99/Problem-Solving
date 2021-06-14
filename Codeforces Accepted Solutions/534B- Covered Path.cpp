#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, INF = 1e9;
const double pi = acos(-1);
using namespace std;
 
int s, e, d, t, ans, dp[105][N];
int solve(int id, int cur, int dist)
{
    if(id == t) return (cur == e)? dist : -INF;
    if(~dp[id][cur]) return dp[id][cur];
    int ans = 0;
    for(int i = d; i >= -min(d, cur); i--)
    {
        ans = max(ans, solve(id + 1, cur + i, dist + cur + i));
    }
    return dp[id][cur] = ans;
}
 
int main()
{
    assem99
    memset(dp, -1, sizeof dp);
    cin>>s>>e>>t>>d;
    cout<<solve(1, s, s) ;
 
    return 0;
}
