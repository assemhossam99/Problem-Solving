#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e3 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int n, l, k;
pair<int, ld> arr[205];
ld dp[205][205][205];
 
ld solve(int idx, int won, int cap)
{
    if(cap < 0) return 0;
    if(idx < 0) return won >= l;
    if(dp[idx][won][cap] > -1) return dp[idx][won][cap];
    ld ret = 0;
    ret += (1.0 - arr[idx].second) * solve(idx - 1, won, cap);
    ret += arr[idx].second * solve(idx - 1, won + 1, min(201, cap + arr[idx].first));
    return dp[idx][won][cap] = ret;
}
 
int main()
{
    Assem99
    cin>>n>>l>>k;
    for(int i = 0; i < 205; i++) for(int j = 0; j < 205; j++) for(int k = 0; k < 205; k++) dp[i][j][k] = -1;
    for(int i = 0; i < n; i++) cin>>arr[i].second, arr[i].second /= 100.0;
    for(int i = 0; i < n; i++) cin>>arr[i].first;
    sort(arr, arr + n);
    cout<<fixed<<setprecision(9)<<solve(n - 1, 0, k);
 
    return 0;
}
