#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll n, k, arr[N], dp[N][2];
ll solve(int id, int pos)
{
    if(id == n) return 0;
    if(~dp[id][pos]) return dp[id][pos];
    ll ans = -1e9;
    ans = max(ans, solve(id + 1, pos));
    if(pos) ans = max(ans, solve(id + 1, !pos) - arr[id]);
    if(!pos) ans = max(ans, solve(id + 1, !pos) + arr[id]);
    return dp[id][pos] = ans;
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i = 0; i < n + 5; i++) for(int j = 0; j < 2; j++) dp[i][j] = -1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        cout<<solve(0, 0)<<endll;
    }
 
    return 0;
}
