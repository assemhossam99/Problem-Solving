#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ll a, b, x, y, n; cin>>a>>b>>x>>y>>n;
        ll tmpa = a, tmpb = b, tmpn = n, ans = 1e18, tmpx = x, tmpy = y;
        if(a > b) swap(a, b), swap(x, y);
        ll cur = min(n, a - x);
        a -= cur;
        n -= cur;
        cur = min(n, b - y);
        b -= cur;
        ans = min(ans, a * b);
        a = tmpa, b = tmpb, n = tmpn, x = tmpx, y = tmpy;
        if(a > b)swap(a, b), swap(x, y);
        cur = min(n, b - y);
        b -= cur;
        n -= cur;
        cur = min(n, a - x);
        a -= cur;
        cout<<min(ans, a * b)<<endll;
    }
 
    return 0;
}
