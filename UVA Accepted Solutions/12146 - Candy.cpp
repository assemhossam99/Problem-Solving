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
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int n, m;
map<pair<int, int>, int> arr;
map<pair<int, pair<int, int>>, int> dp;
int solve(int i, int j, bool flag)
{
    if(i >= n or j >= m) return 0;
    if(dp[{i, {j, flag}}]) return dp[{i, {j, flag}}];
    int ans = 0;
    if(!flag)ans = max(ans, solve(i + 1, 0, 0));
    ans = max(ans, solve(i, j + 1, flag));
    ans = max(ans, solve(i + 2, 0, 0) + arr[{i, j}]);
    ans = max(ans, solve(i, j + 2, 1) + arr[{i, j}]);
    return dp[{i, {j, flag}}] = ans;
}

int main()
{
    assem99
    while(cin>>n>>m)
    {
        dp.clear();

        if(!n) break;
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                int a; cin>>a;
                arr[{i, j}] = a;
            }
        }
    cout<<solve(0, 0, 0)<<endll;
    }

    return 0;
}