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
 
ll arr[N];
ll solve(ll x, ll n)
{
    ll ret = 0;
    for(int i = 0; i < n; i++) ret += abs(arr[i] - pow(x, i));
    return ret;
}
 
int main()
{
    assem99
    int n; cin>>n;
    for(int i =0; i < n; i++) cin>>arr[i];
    sort(arr, arr +n);
    ll ans = 2e18, start = 0, end, mid1, mid2;
    for(int ll i = 1; i <= 1e5; i++) if(pow(i, n) <= 1e15) end = i;
    while(start <= end)
    {
        mid1 = start + (end - start) / 3, mid2 = end - (end - start) / 3;
        ll m1 = solve(mid1, n), m2 = solve(mid2, n);
        if(m1 < m2) end = mid2 - 1;
        else start = mid1 + 1;
        ans = min(ans, min(m1, m2));
    }
    cout<<ans;
 
 
    return 0;
}
