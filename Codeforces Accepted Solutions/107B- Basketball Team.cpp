#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e8, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ld ncr(ll n, ll r)
{
    if(n < r) return 0.0;
    ld ans = 1;
    int i = n, j = 2, ok = 1;
    while(ok)
    {
        ok = 0;
        if(i > max(r, n - r)) ans *= i, ok = 1;
        if(j <= min(r, n - r)) ans /= j, ok = 1;
        i--, j++;
    }
    return ans;
}
 
int main()
{
    assem99
    int n, m, h; cin>>n>>m>>h;
    ld arr[m + 5], sum = 0;
    for(int i = 1; i <= m; i++) cin>>arr[i], sum += (i != h)? arr[i] : 0;
    if(sum + arr[h] < n) return cout<<-1, 0;
    if(arr[h] == 1 or n == 1) return cout<<0, 0;
    ld a = ncr(sum, n - 1), b = 0;
    for(int i = 1; i < arr[h]; i++) b += ncr(arr[h] - 1, i) * ncr(sum, n - (i + 1));
    cout<<fixed<<setprecision(12)<< b / (a + b);
 
    return 0;
}
