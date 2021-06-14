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
 
ll n, l, r, dp[N][5], m0, m1, m2;
 
ll add(ll a, ll b)
{
    return (a % mod + b % mod) % mod;
}
 
ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}
 
ll solve(int idx, int sum)
{
    if(idx == n) return !sum;
    if(~dp[idx][sum]) return dp[idx][sum];
    ll ans = mul(solve(idx + 1, sum), m0);
    ans = add(ans, mul(solve(idx + 1, (sum + 1) % 3), m1));
    ans = add(ans, mul(solve(idx + 1, (sum + 2) % 3), m2));
    return dp[idx][sum] = ans;
}
 
int main()
{
    Assem99
    memset(dp, -1, sizeof dp);
    cin>>n>>l>>r;
    m0 = (r / 3) - ((l - 1) / 3);
    m1 = ((r / 3) + (r % 3 != 0)) - (((l -1) / 3) + ((l - 1) % 3 != 0));
    m2 = ((r / 3) + (r % 3 > 1)) - (((l -1) / 3) + ((l - 1) % 3 > 1));
    cout<<solve(0, 0);
 
    return 0;
}
