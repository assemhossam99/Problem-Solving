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
const int MOD = 1e9 + 7, N = 1e4 + 5;
const double pi = acos(-1);
using namespace std;
 
ld x[N], y[N];
 
int main()
{
 assem99;
 ld n, xx, yy; cin >> n >> xx >> yy;
 rep(i, 0, n) cin >> x[i] >> y[i];
 int ans = 0;
 bool ok = false;
 rep(i, 0, n)
 {
  if (xx == x[i])
  {
   x[i] = y[i] = 1e9;
   if (!ok)
   {
    ok = true;
    ans++;
   }
  }
 }
 rep(i, 0, n)
 {
  if (x[i] == 1e9 or y[i] == 1e9) continue;
  ans++;
  ld slope = (yy - y[i]) / (xx - x[i]);
  x[i] = y[i] = 1e9;
  rep(j, i + 1, n)
  {
   ld curSlope = (yy - y[j]) / (xx - x[j]);
   if (curSlope == slope)
   {
    x[j] = y[j] = 1e9;
   }
  }
 }
 cout << ans;
 
 return 0;
}
