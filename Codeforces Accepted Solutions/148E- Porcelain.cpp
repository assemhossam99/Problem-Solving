#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int n, m, sz[105], arr[105], dp[105][105], dp2[105][50005];
 
int solve(int id, int l, int r, int cum)
{
    int i = 0, cur = 0;
    while(i + 1 <= r) cur += arr[i++];
    int ret = cur;
    int j = 0;
    while(i < sz[id])
    {
        cur += (arr[i++] - arr[j++]);
        ret = min(ret, cur);
    }
    return cum - ret;
}
 
int solve(int id, int rem)
{
    if(id == n) return 0;
    if(~dp2[id][rem]) return dp2[id][rem];
    int ans = 0;
    for(int i = 0; i <= sz[id]; i++)
    {
        if(i <= rem) ans = max(ans, solve(id + 1, rem - i) + dp[id][i]);
    }
    return dp2[id][rem] = ans;
}
 
int main()
{
    assem99
    memset(dp2, -1, sizeof dp2);
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        cin>>sz[i];
        int cum = 0;
        for(int j = 0; j < sz[i]; j++)
        {
            cin>>arr[j];
            cum += arr[j];
        }
        for(int j = 0; j <= sz[i]; j++) dp[i][j] = solve(i, 0, sz[i] - j, cum);
    }
    cout<<solve(0, m);
 
    return 0;
}
