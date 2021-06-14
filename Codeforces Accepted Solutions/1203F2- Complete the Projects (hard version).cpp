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
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
 
int n, r;
vii pos;
vector<pair<int, ii>> neg;
int dp[105][N];
 
int solve(int id, int curRate)
{
 if (id == sz(neg))
 {
  if (curRate <= r) return 0;
  else return -1e9;
 }
 if (dp[id][curRate] != -1) return dp[id][curRate];
 
 int ans = 0;
 ans = solve(id + 1, curRate);
 if (neg[id].S.F <= r - curRate) ans = max(ans, 1 + solve(id + 1, curRate - neg[id].S.S));
 
 return dp[id][curRate] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n >> r;
 f(i, 0, n)
 {
  int a, b; cin >> a >> b;
  if (b >= 0) pos.push_back(ii(a, b));
  else neg.push_back({ a + b, ii(a, b) });
 }
 sort(pos.begin(), pos.end());
 sort(neg.rbegin(), neg.rend());
 int ans = 0;
 f(i, 0, sz(pos))
 {
  if (r >= pos[i].F)
  {
   r += pos[i].S;
   ans++;
  }
  else break;
 }
 cout << ans + solve(0, 0);
 return 0;
}
