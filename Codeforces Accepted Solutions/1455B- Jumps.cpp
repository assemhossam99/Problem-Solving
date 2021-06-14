#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const int mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int n;
 
ll bs(ll start, ll end, ll mid, ll val)
{
    ll ret = 0;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(mid * (mid + 1) >= 2 * val)
        {
            ret = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ret;
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin >> n;
        ll x = bs(0, n, 0, n);
        if ((x * (x + 1) / 2) == n + 1) x++;
        cout << x << endll;
    }
    return 0;
}
