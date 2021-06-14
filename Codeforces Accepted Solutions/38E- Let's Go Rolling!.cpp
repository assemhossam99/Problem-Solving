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
 
int n;
vector<pair<int, int>> vec;
int dp[3005][3005];
ll solve(int id, int fixd)
{
    if(id == n) return 0;
    if(~dp[id][fixd]) return dp[id][fixd];
    ll ans = 1e18;
    ans = min(ans, solve(id + 1, id) + vec[id].second);
    ans = min(ans, solve(id + 1, fixd) + abs(vec[fixd].first - vec[id].first));
    return dp[id][fixd] = ans;
}
 
int main()
{
    assem99
    memset(dp, -1, sizeof dp);
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin>>a>>b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end());
    cout<<solve(1, 0) + vec[0].second;
 
    return 0;
}
