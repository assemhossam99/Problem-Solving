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
 int n, m; cin >> n >> m;
 int arr[105][105], ans[105][105];
 rep(i, 0, n) rep(j, 0, m) ans[i][j] = 1;
 rep(i, 0, n) rep(j, 0, m) cin >> arr[i][j];
 rep(i, 0, n)
 {
  rep(j, 0, m)
  {
   if (arr[i][j] == 0)
   {
    rep(k, 0, m) ans[i][k] = 0;
    rep(k, 0, n) ans[k][j] = 0;
   }
  }
 }
 bool valid = true;
 rep(i, 0, n)
 {
  rep(j, 0, m)
  {
   if (arr[i][j] == 0)
   {
    rep(k, 0, m) if (ans[i][k] == 1 && valid) valid = false;
    rep(k, 0, n) if (ans[k][j] == 1 && valid) valid = false;
   }
   else
   {
    bool one = false;
    rep(k, 0, m) if (ans[i][k] == 1) one = true;
    rep(k, 0, n) if (ans[k][j] == 1) one = true;
    valid &= one;
   }
  }
 }
 if (valid)
 {
  cout << "YES" << endl;
  rep(i, 0, n)
  {
   rep(j, 0, m) cout << ans[i][j] << ' ';
   cout << endl;
  }
 }
 else cout << "NO";
 
 return 0;
}
