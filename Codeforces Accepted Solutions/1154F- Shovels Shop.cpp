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
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
using namespace std;
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
//#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int n, m, k, pref[N], sale[N], dp[N];
vector<int> arr;
 
ll solve(int id)
{
 if (id > k) return 0;
 if (dp[id] != -1) return dp[id];
 ll ans = solve(id + 1) + pref[id] - pref[id - 1];
 for (int j = 1; j <= k - id + 1; j++) //j = size
 {
  if (sale[j] == -1) continue;
  ans = min(ans, solve(id + j) + pref[id + j - 1] - pref[id + sale[j] - 1]);
 }
 return dp[id] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 memset(sale, -1, sizeof(sale));
 cin >> n >> m >> k;
 arr.push_back(0);
 f(i, 1, n + 1)
 {
  int a; cin >> a;
  arr.push_back(a);
 }
 sort(arr.begin(), arr.end());
 f(i, 1, k + 1) pref[i] = pref[i - 1] + arr[i];
 f(i, 1, m + 1)
 {
  int a, b; cin >> a >> b;
  if (a <= k) sale[a] = max(sale[a], b);
 }
 cout << solve(1);
 
 return 0;
}
