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
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
 
ll arr[N], cost[N], dp[N][3];
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  f(i, 0, n) cin >> arr[i] >> cost[i];
  dp[0][0] = 0, dp[0][1] = cost[0], dp[0][2] = 2 * cost[0];
  f(i, 1, n)
  {
   f(j, 0, 3)
   {
    int diff = (arr[i] + j) - arr[i - 1];
    if (diff == 0) dp[i][j] = j * cost[i] + min(dp[i - 1][1], dp[i - 1][2]);
    else if (diff == 1) dp[i][j] = j * cost[i] + min(dp[i - 1][0], dp[i - 1][2]);
    else if (diff == 2) dp[i][j] = j * cost[i] + min(dp[i - 1][0], dp[i - 1][1]);
    else dp[i][j] = j * cost[i] + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
   }
  }
  
  cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2])) << endl;
 }
 
 return 0;
}
