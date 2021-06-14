#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
string s;
int dp[N][2][2];
 
int add(int a, int b)
{
    int ret = (a % mod) + (b % mod);
    return ret % mod;
}
 
int solve(int idx, int valid, int took)
{
    if(idx == sz(s)) return took;
    if(~dp[idx][valid][took])return dp[idx][valid][took];
    int ans = 0;
    if(s[idx] == 'b') ans = add(ans, solve(idx + 1, 1, took));
    else if(s[idx] == 'a')
    {
        if(valid) ans = add(ans, solve(idx + 1, 0, 1));
        ans = add(ans, solve(idx + 1, valid, took));
    }
    else ans = add(ans, solve(idx + 1, valid, took));
    return dp[idx][valid][took] = ans;
}
 
int main()
{
    Assem99
    cin>>s;
    memset(dp, -1, sizeof dp);
    cout<<solve(0, 1, 0);
 
    return 0;
}
