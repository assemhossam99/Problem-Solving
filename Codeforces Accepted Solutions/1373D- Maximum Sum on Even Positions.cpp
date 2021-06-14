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
 
ll n, arr[N], dp[N][3][2];
int vis[N][3][2], curVis;
ll solve(int id, int state, bool end)
{
 if (id == n) return (state == 1) ? -1e15 : 0;
 if (vis[id][state][end] == curVis) return dp[id][state][end];
 ll ans = 0;
 vis[id][state][end] = curVis;
 if (!state)
 {
  ans = max(ans, solve(id + 1, state, end) + ((id & 1) ? 0 : arr[id]));
  ans = max(ans, solve(id + 1, state + 1, (id & 1)) + ((id & 1) ? arr[id] : 0));
 }
 else if (state == 1)
 {
  ans = max(ans, solve(id + 1, state, end) + ((id & 1) ? arr[id] : 0));
  if((id & 1) != end)ans = max(ans, solve(id + 1, state + 1, end) + ((id & 1) ? arr[id] : 0));
 }
 else ans = max(ans, solve(id + 1, state, end) + ((id & 1) ? 0 : arr[id]));
 return dp[id][state][end] = ans;
}
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  cin >> n;
  rep(i, 0, n) cin >> arr[i];
  curVis++;
  cout << solve(0, 0, 0) << endl;
 }
 
 return 0;
}
