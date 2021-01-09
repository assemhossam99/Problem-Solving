#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

ll n, dp[N];
ll fp(ll b, ll p)
{
    if (p == 0)
        return 1;
    ll ans = fp(b, p / 2);
    ans = (ans * ans) % MOD;

    if (p % 2 != 0)
        ans = (ans *(b % MOD)) % MOD;
    return ans;
}

ll solve(int id)
{
    if(id == n) return 1;
    if(~dp[id]) return dp[id];
    ll ans = solve(id + 1);
    if(id + 2 <= n) ans += solve(id + 2), ans %= MOD;
    return dp[id] = ans ;
}

int main()
{
    assem99
    memset(dp, -1, sizeof dp);
    cin>>n;
    ll cur = fp(2, n);
    cout<<(solve(1) * fp(cur, MOD - 2)) % MOD;


    return 0;
}