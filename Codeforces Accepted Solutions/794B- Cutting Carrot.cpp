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
 
int main()
{
 assem99;
 double n, h; cin >> n >> h;
 double totalArea = 0.5 * h;
 int hyp = hypot(0.5, h);
 double cosine = 0.5 / double(hyp);
 for (double i = 1; i < n; i++)
 {
  double start = 0, end = h, mid;
  double area = (i / n) * totalArea;
  rep(i, 0, 1000)
  {
   mid = (start + end) / 2.0;
   if (mid * mid * cosine < area) start = mid;
   else end = mid;
  }
  cout << fixed << setprecision(9) << mid << ' ';
 }
 
 return 0;
}
