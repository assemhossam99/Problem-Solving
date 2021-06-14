#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll solve(ll n)
{
    ll ret = 0;
    while(n)
    {
        ret += (n  % 10);
        n /= 10;
    }
    return ret;
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ll n, m; cin>>n>>m;
        if(solve(n) <= m)
        {
            cout<<0<<endll;
            continue;
        }
        ll ans = 0, fact = 1;
        for(int i = 0; i < 18; i++)
        {
            ll cur = (n / fact) % 10, add = fact * ((10 - cur) % 10);
            n += add;
            ans += add;
            fact *= 10;
            if(solve(n) <= m) break;
        }
        cout<<ans<<endll;
    }
 
    return 0;
}
