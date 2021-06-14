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
#include <complex>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define ever (;;)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int n, arr[105], dp[105][2][2];
int solve(int id, bool gym, bool contest)
{
 if (id == n) return 0;
 if (~dp[id][gym][contest]) return dp[id][gym][contest];
 
 int ans = 1e9;
 ans = min(ans, solve(id + 1, false, false) + 1);
 if (!gym and !contest)
 {
  if (arr[id] == 2 or arr[id] == 3) ans = min(ans, solve(id + 1, true, false));
  if (arr[id] == 1 or arr[id] == 3) ans = min(ans, solve(id + 1, false, true));
 }
 if (gym and (arr[id] == 1 or arr[id] == 3)) ans = min(ans, solve(id + 1, false, true));
 if (contest and (arr[id] == 2 or arr[id] == 3)) ans = min(ans, solve(id + 1, true, false));
 return dp[id][gym][contest] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n;
 rep(i, 0, n) cin >> arr[i];
 cout<<solve(0, 0, 0);
 
 return 0;
}
