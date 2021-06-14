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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
 
int n, a, b, c;
int dp[N];
int solve(int len)
{
 if (len == 0) return 0;
 if (len < 0) return -1e9;
 if (dp[len] != -1) return dp[len];
 int ans = -1e9;
 ans = max(ans, 1 + solve(len - a));
 ans = max(ans, 1 + solve(len - b));
 ans = max(ans, 1 + solve(len - c));
 
 return dp[len] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n >> a >> b >> c;
 cout << solve(n);
 
 return 0;
}
