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
using namespace std;
 
int main()
{
 assem99;
 ll n; cin >> n;
 ll a, sumf = 0, sums = 0;
 vector<ll> f, s;
 rep(i, 0, n)
 {
  cin >> a;
  if (a > 0)
  {
   f.push_back(a);
   sumf += a;
  }
  else
  {
   s.push_back(-1 * a);
   sums += (-1 * a);
  }
 }
 if (sumf > sums) cout << "first";
 else if (sumf < sums) cout << "second";
 else
 {
  ll mn = min(sz(f), sz(s));
  rep(i, 0, mn)
  {
   if (f[i] > s[i]) return cout << "first", 0;
   if (f[i] < s[i]) return cout << "second", 0;
  }
  if (sz(f) > sz(s)) return cout << "first", 0;
  if (sz(f) < sz(s)) return cout << "second", 0;
  if (a > 0) return cout << "first", 0;
  if (a < 0) return cout << "second", 0;
 }
 
 return 0;
}
