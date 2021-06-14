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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int n, k, d;
ll dp[N][2];
ll solve(int rem, bool valid)
{
 if (rem == 0)
 {
  if (valid) return 1;
  else return 0;
 }
 if (dp[rem][valid] != -1) return dp[rem][valid];
 ll ans = 0;
 f(i, 1, k + 1)
 {
  if (rem >= i)
  {
   if (i >= d) ans = (ans % MOD + solve(rem - i, true) % MOD) % MOD;
   else ans = (ans % MOD + solve(rem - i, valid) % MOD) % MOD;
  }
  else break;
 }
 return dp[rem][valid] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n >> k >> d;
 cout << solve(n, false);
 
 return 0;
}
