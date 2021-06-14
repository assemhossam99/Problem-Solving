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
#include <unordered_set>
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
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int n, dp[10000005][4];
ll solve(int id, int pnt)
{
 if (!id) return (pnt == 3);
 if (~dp[id][pnt]) return dp[id][pnt];
 ll ans = 0;
 rep(i, 0, 4) if (i != pnt) ans = (ans + solve(id - 1, i)) % MOD;
 return dp[id][pnt] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof dp);
 cin >> n;
 rep(i, 1, n + 1) solve(i, 3);
 cout<<solve(n, 3);
 
 return 0;
}
