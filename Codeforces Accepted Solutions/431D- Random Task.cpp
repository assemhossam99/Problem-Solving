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
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
ll m, k;
 
 
ll ncr(ll n, ll k)
{
    ll res = 1;
    if ( k > n - k ) k = n - k;
    for (ll i = 0; i < k; ++i)  {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
 
 
ll FromOneTo(ll n)
{
    ll ret = 0;
    int prevOnes = 0;
    for(ll i = 63; i >= 0; i--)
    {
        if((1LL << i) & n)
        {
            if(i >= k - prevOnes) ret += ncr(i, k - prevOnes);
            prevOnes++;
        }
    }
    return ret;
}
 
ll solve(ll n)
{
    return FromOneTo(2 * n) - FromOneTo(n);
}
 
int main()
{
    Assem99
    cin>>m>>k;
    ll start = 1, end = 1e18, mid, n;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(solve(mid) >= m)
        {
            n = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    cout<<n;
 
    return 0;
}
