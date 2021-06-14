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
 
vii vec, v;
 
int main()
{
 assem99;
 int n, m, l, r; cin >> n >> m >> l >> r;
 rep(i, 0, n)
 {
  int a, b; cin >> a >> b;
  vec.push_back(ii(a, b));
 }
 int ans = 0;
 rep(i, 0, m)
 {
  int a, b; cin >> a >> b;
  v.push_back(ii(a, b));
 }
 rep(i, l, r + 1)
 {
  bool ok = false;
  rep(j, 0, m)
  {
   int a = v[j].F + i, b = v[j].S + i;
   rep(k, 0, n)
   {
    if (vec[k].F <= b && vec[k].S >= a) ok = true;
   }
   if (ok)
   {
    ans++;
    break;
   }
  }
 }
 cout << ans;
 
 return 0;
}
