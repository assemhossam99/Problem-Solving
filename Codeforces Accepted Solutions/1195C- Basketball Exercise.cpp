#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
ll n, arr[N][2], dp[N][2];
 
ll solve(int i, int j)
{
    if(i == n)
    {
        return 0;
    }
    if(dp[i][j] != -1) return dp[i][j];
    ll ans;
    if(j == 0)
    {
        ans = arr[i][j] + solve(i + 1, j + 1);
        if(i != n - 1) ans = max(ans, arr[i][j] + solve(i + 2, j));
        if(i != n - 1) ans = max(ans, arr[i][j] + solve(i + 2, j + 1));
    }
    else
    {
        ans = arr[i][j] + solve(i + 1, j - 1);
        if(i != n - 1) ans = max(ans, arr[i][j] + solve(i + 2, j));
        if(i != n - 1) ans = max(ans, arr[i][j] + solve(i + 2, j - 1));
    }
    return dp[i][j] = ans;
}
 
int main() {
    assem99
    cin>>n;
    memset(dp, -1, sizeof(dp));
    f(i, 0, n) cin>>arr[i][0];
    f(i, 0, n) cin>>arr[i][1];
    cout<<max(solve(0, 0), solve(0, 1));
 
    return 0;
}
