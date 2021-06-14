#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 1, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
pair<int, int> arr[30];
int x, y, n, dp[(1 << 24) + 5];
int dist(int i, int j)
{
    return (arr[i].first - arr[j].first) * (arr[i].first - arr[j].first) + (arr[i].second - arr[j].second) * (arr[i].second - arr[j].second)
           +  (arr[i].first - x) * (arr[i].first - x) + (arr[i].second - y) * (arr[i].second - y)
           +  (x - arr[j].first) * (x - arr[j].first) + (y - arr[j].second) * (y - arr[j].second);
}
 
int solve(int mask)
{
    if(~dp[mask]) return dp[mask];
    int ans = oo, j = 0;
    for(int i = 0; i < n; i++)
    {
        if(mask & (1 << i)) continue;
        j = i;
        break;
    }
    for(int i = j; i < n; i++)
    {
        if(mask & (1 << i)) continue;
        int dis = dist(i, j);
        ans = min(ans, dis + solve(mask | (1 << j) | (1 << i)));
    }
    return dp[mask] = ans;
}
 
void build(int mask)
{
    if(mask == (1 << n) - 1) return;
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(mask & (1 << i)) continue;
        j = i;
        break;
    }
    for(int i = j; i < n; i++)
    {
        if(mask & (1 << i)) continue;
        int dis = dist(i, j);
        if(dp[mask] == dis + solve(mask | (1 << j) | (1 << i)))
        {
            if(j == i) cout<< i + 1 << " 0 ";
            else cout<<j + 1<<' '<<i + 1<<" 0 ";
            build(mask | (1 << j) | (1 << i));
            return;
        }
    }
}
 
int main()
{
    assem99
    memset(dp, -1, sizeof dp);
    cin>>x>>y>>n;
    for(int i = 0; i < n; i++) cin>>arr[i].first>>arr[i].second;
    arr[25] = {x, y};
    dp[(1 << n) - 1] = 0;
    cout<<solve(0)<<endll<<"0 ";
    build(0);
 
    return 0;
}
