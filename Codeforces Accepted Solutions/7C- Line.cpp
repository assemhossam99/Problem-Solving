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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
void move_1step(ll& a, ll& b, ll q)
{
 ll c = a - b * q;
 a = b, b = c;
}
 
ll egcd(ll r0, ll r1, ll& x0, ll& y0)
{
 x0 = 1, y0 = 0;
 ll x1 = 0, y1 = 1;
 while (r1)
 {
  int q = r0 / r1;
  move_1step(r0, r1, q);
  move_1step(x0, x1, q);
  move_1step(y0, y1, q);
 }
 return r0;
}
 
bool solve(ll a, ll b, ll c, ll& x, ll& y)
{
 ll g = egcd(a, b, x, y);
 ll m = c / g;
 x *= m;
 y *= m;
 return(c % g == 0);
}
 
int main()
{
 assem99;
 
 ll a, b, c, ans1, ans2;
 cin >> a >> b >> c;
 c *= -1;
 if (solve(a, b, c, ans1, ans2))
 {
  cout << ans1 << ' ' << ans2;
 }
 else cout << "-1";
 
 return 0;
}
