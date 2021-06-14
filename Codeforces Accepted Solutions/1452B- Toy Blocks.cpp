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
 
int ceil(ll a, ll b)
{
    return (a / b) + (a % b != 0);
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll sum = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            mx = max(mx, 1LL * a);
            sum += a;
        }
        ll cur = max(1LL * ceil(sum, n - 1), mx);
        cout<<(cur * (n - 1)) - sum<<endll;
    }
 
 
    return 0;
}
