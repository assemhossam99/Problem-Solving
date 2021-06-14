#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5, INF = 1e9;
const double pi = acos(-1);
using namespace std;
 
int n, arr[N];
map< pair<int, pair<int, int>>, int> dp;
int solve(int id, int flip, int last)
{
    if(id == n) return 0;
    if(dp[{id, {flip, last}}]) return dp[{id, {flip, last}}];
    int ans = 0;
    if(!flip)
    {
        if(arr[id] > last) ans = 1 + max({ans, solve(id + 1, 0, arr[id]), solve(id + 1, 1, last + 1)});
        else ans = 1 + max(ans, solve(id + 1, 1, last + 1));
    }
    else if(arr[id] > last) ans = 1 + max(ans, solve(id + 1, flip, arr[id]));
    return dp[{id, {flip, last}}] = ans;
}
 
int main()
{
    assem99
    cin>>n;
    rep(i, 0, n) cin>>arr[i];
    int ans = 0;
    rep(i, 0, n) ans = max(ans, solve(i, 0, -INF));
    cout<<ans;
 
    return 0;
}
