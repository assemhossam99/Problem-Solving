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
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
using namespace std;
 
int n, h, l, r, arr[N], ans = 0;
int dp[N][N];
int solve(int id, int time)
{
    if(id == n) return 0;
    if(dp[id][time] != -1) return dp[id][time];
    int t1 = (arr[id] + time) % h;
    int t2 = (arr[id] - 1 + time) % h;
    int ans = (t1 >= l && t1 <= r) + solve(id + 1, t1);
    ans = max(ans, (t2 >= l && t2 <= r) + solve(id + 1, t2));
 
    return dp[id][time] = ans;
}
 
// states : id
// base case : id = n - 1;
// transitions : time + arr[id] OR time + arr[id] - 1
 
int main() {
    assem99
    memset(dp, -1, sizeof(dp));
    cin>>n>>h>>l>>r;
    f(i, 0, n) cin>>arr[i];
    cout<<solve(0, 0);
 
    return 0;
}
