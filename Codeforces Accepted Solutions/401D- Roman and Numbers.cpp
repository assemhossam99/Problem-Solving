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
 
string s;
ll m, dp[(1 << 18) + 5][105];
ll solve(int msk, int cur)
{
    if(msk == (1 << sz(s)) - 1) return cur == 0;
    ll &ans = dp[msk][cur];
    if(~ans) return ans;
    ans = 0;
    int vis = 0;
    for(int i = 0; i < sz(s); i++)
    {
        if((!msk && s[i] == '0') || (1 << (s[i] - '0') & vis) || ((1 << i) & msk)) continue;
        vis |= (1 << s[i] - '0');
        ans += solve((1 << i) | msk,  (cur * 10 + (s[i] - '0')) % m);
    }
    return ans;
}
 
int main()
{
    Assem99
    memset(dp, -1, sizeof dp);
    cin>>s>>m;
    cout<<solve(0, 0);
 
    return 0;
}
