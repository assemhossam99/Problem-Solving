#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set> 
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
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
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int n, dp[5005][5005];
vector<int> vec;
int solve(int i, int j)
{
 if (!i and j == n - 1) return 0;
 if (~dp[i][j]) return dp[i][j];
 int ans = 1e9;
 if (i and j < n - 1 and vec[i - 1] == vec[j + 1]) ans = min(ans, solve(i - 1, j + 1) + 1);
 if (i) ans = min(ans, solve(i - 1, j) + 1);
 if (j < n - 1) ans = min(ans, solve(i, j + 1) + 1);
 return dp[i][j] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof dp);
 cin >> n;
 rep(i, 0, n)
 {
  int a; cin >> a;
  if (!sz(vec) or (sz(vec) and vec.back() != a)) vec.push_back(a);
 }
 n = sz(vec);
 int ans = 1e9;
 rep(i, 0, n) ans = min(ans, solve(i, i));
 cout << ans;
 
 return 0;
}
