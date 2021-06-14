#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll n, k, arr[N], brr[N];
ll solve(ll mid)
{
    ll ret = 0;
    for(int i = 0; i < mid; i++) ret += brr[i];
    return ret;
}
 
int main()
{
    assem99
    cin>>n>>k;
    for(int i = 0; i < n; i++) cin>>arr[i];
    ll start = 0, end = n, mid, ans = 0, ans2 = 0;
    while(start <= end)
    {
        mid = (start + end) / 2;
        for(int i = 0; i < n; i++) brr[i] = (arr[i] + mid * (i + 1));
        sort(brr, brr + n);
        ll ret = solve(mid);
        if(ret <= k) start = mid + 1, ans2 = ret, ans = mid;
        else end = mid - 1;
    }
    cout<<ans<<' '<<ans2;
 
    return 0;
}
