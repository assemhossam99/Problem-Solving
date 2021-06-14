#include <iostream>
#include <stdio.h>
#include <string>
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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 998244353, N = 6e5 + 5;
const double pi = acos(-1);
 
double d[N], v[N];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 f(i, 0, n) cin >> d[i];
 f(i, 0, n) cin >> v[i];
 double start = 0, end = 1e9, mid, ans = -1;
 f(j, 0, 1000)
 {
  mid = (start + end) / 2;
  double l = d[0] - v[0] * mid, r = d[0] + v[0] * mid;
  f(i, 1, n)
  {
   l = max(l, d[i] - v[i] * mid);
   r = min(r, d[i] + v[i] * mid);
  }
  if (l <= r)
  {
   ans = mid;
   end = mid;
  }
  else start = mid;
 }
 cout << fixed << setprecision(12) << ans;
 
 return 0;
}
