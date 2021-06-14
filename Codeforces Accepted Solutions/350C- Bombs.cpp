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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 vector<pair<ii, ii>> vec;
 int n; cin >> n;
 rep(i, 0, n)
 {
  int a, b; cin >> a >> b;
  vec.push_back({ ii(abs(a), abs(b)), ii((a >= 0), (b >= 0)) });
 }
 sort(vec.begin(), vec.end());
 int cnt = 0;
 rep(i, 0, n)
 {
  cnt += 2;
  if (vec[i].F.F != 0) cnt += 2;
  if (vec[i].F.S != 0) cnt += 2;
 }
 cout << cnt << '\n';
 rep(i, 0, n)
 {
  int x = vec[i].F.F; if (vec[i].S.F == 0) x *= -1;
  int y = vec[i].F.S; if (vec[i].S.S == 0) y *= -1;
  // move to take bomb
  if (x > 0) cout << "1 " << x << " R" << '\n';
  if (x < 0) cout << "1 " << abs(x) << " L" << '\n';
  if (y > 0) cout << "1 " << y << " U" << '\n';
  if (y < 0) cout << "1 " << abs(y) << " D" << '\n';
  // take bomb
  cout << '2' << '\n';
  // return to (0, 0)
  if (y > 0) cout << "1 " << y << " D" << '\n';
  if (y < 0) cout << "1 " << abs(y) << " U" << '\n';
  if (x > 0) cout << "1 " << x << " L" << '\n';
  if (x < 0) cout << "1 " << abs(x) << " R" << '\n';
  // leave bomb
  cout << "3" << '\n';
 }
 
 return 0;
}
