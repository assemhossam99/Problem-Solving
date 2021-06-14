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
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
#define X second.first
#define Y second.second
int n;
ld dp[N][N];
vector<pair<pair<ld, ld>, pair<ld, ld>>> vec;
 
 
ld dist(ld x1, ld y1, ld x2, ld y2)
{
    ld x = (x1 - x2), y = (y1 - y2);
    return hypot(y, x);
}
 
ld time (int i, int j)
{
    return vec[j].first.first - vec[i].first.first;
}
 
ld solve(int idx, int prev)
{
    if(idx == n) return 0;
    if(dp[idx][prev] != -1 ) return dp[idx][prev];
    ld ans = 0;
    ans = max(ans, solve(idx + 1, prev));
    if(prev == n || dist(vec[idx].X, vec[idx].Y, vec[prev].X, vec[prev].Y) <= time(prev, idx))
        ans = max(ans, solve(idx + 1, idx) + vec[idx].first.second);
    return dp[idx][prev] = ans;
}
 
int main()
{
    Assem99
    cin>>n;
    for(int i = 0; i <= n; i++) for(int j = 0; j <= n; j++) dp[i][j] = -1;
    for(int i = 0; i < n; i++)
    {
        ld x, y, t, p; cin>>x>>y>>t>>p;
        vec.push_back({{t, p}, {x, y}});
    }
    sort(vec.begin(), vec.end());
    cout<< fixed << setprecision(9) << solve(0, n);
 
    return 0;
}
