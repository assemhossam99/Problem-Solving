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
 
double dot(point a, point b)
{
 return (conj(a) * b).real();
}
 
double cross(point a, point b)
{
 return (conj(a) * b).imag();
}
 
double angle(point a, point b)
{
 double dt = dot(a, b);
 dt /= abs(a);
 dt /= abs(b);
 return acos(dt) * 180.0 / pi;
}
 
point arr[3];
bool isRight(int id)
{
 point v1(arr[id] - arr[(id + 1) % 3]), v2(arr[id] - arr[(id + 2) % 3]);
 return (angle(v1, v2) == 90);
}
bool solve(int id)
{
 rep(i, 0, 3)
 {
  arr[i] += point(1, 0); if (isRight(id)) return true;
  arr[i] -= point(2, 0); if (isRight(id)) return true;
  arr[i] += point(1, 1); if (isRight(id)) return true;
  arr[i] -= point(0, 2); if (isRight(id)) return true;
  arr[i] += point(0, 1);
 }
 return false;
}
 
int main()
{ 
 assem99;
 rep(i, 0, 3)
 {
  int x, y; cin >> x >> y;
  arr[i] = point(x, y);
 }
 bool ans = false;
 rep(i, 0, 3)
 {
  if (isRight(i))
  {
   ans = true;
   cout << "RIGHT" << endl;
   break;
  }
 }
 rep(i, 0, 3)
 {
  if (ans) break;
  if (solve(i))
  {
   cout << "ALMOST" << endl;
   ans = true;
   break;
  }
 }
 if (!ans) cout << "NEITHER";
 
 return 0;
}
