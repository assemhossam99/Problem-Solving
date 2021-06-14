#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int n, m, arr[N], brr[N], dp[205][1000];
int solve(int id, int calc)
{
    if(id == n) return calc;
    if(~dp[id][calc]) return dp[id][calc];
    int ans = oo;
    for(int i = 0; i < m; i++) ans = min(ans, solve(id + 1, calc | (arr[id] & brr[i])));
    return dp[id][calc] = ans;
}
 
int main()
{
    assem99
    memset(dp, -1, sizeof dp);
    cin>>n>>m;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int j = 0; j < m; j++) cin>>brr[j];
    cout<<solve(0, 0);
 
    return 0;
}
