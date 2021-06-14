#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll solve(ll n, ll i)
{
    return ((n - 1) / i) + (i - 1);
}
 
int main()
{
    assem99
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        ll ans = 1e18;
        for(int i = 1; i * i <= n; i++)
        {
            ans = min(ans, solve(n, i));
        }
        cout<<ans<<endll;
    }
 
    return 0;
}
