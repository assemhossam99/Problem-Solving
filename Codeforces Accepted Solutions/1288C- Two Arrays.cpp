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
 
int n, m;
ll dp[50][N];
ll solve(int id, int cur)
{
 if (id == 2 * m) return 1;
 if (dp[id][cur] != -1) return dp[id][cur];
 ll ans = 0;
 rep(i, cur, n + 1) ans = (ans + solve(id + 1, i)) % MOD;
 return dp[id][cur] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin>>n >> m;
 cout << solve(0, 1);
 
 return 0;
}
