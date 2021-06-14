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
 
ld rad(ld degree)
{
 return (degree * pi) / 180.0;
}
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  ld n; cin >> n;
  int iterate = n / 2; iterate--;
  ld angle = ((2 * n - 2) * 180) / (2 * n), ans = 1.0, opp, adj = 0.0;
  while (iterate--)
  {
   adj = 90 - (angle - 90 - adj);
   ans += 2 * cos(rad(adj));
  }
  cout << fixed << setprecision(9) << ans << endl;
 }
 
 return 0;
}
