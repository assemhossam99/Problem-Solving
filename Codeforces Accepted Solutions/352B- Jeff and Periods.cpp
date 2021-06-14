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
 
map<int, vector<int>> mp;
vii ans;
 
int main()
{
 assem99;
 int n; cin >> n;
 rep(i, 0, n)
 {
  int a; cin >> a;
  mp[a].push_back(i);
 }
 for (auto it : mp)
 {
  if (sz(it.S) == 1)ans.push_back(ii(it.F, 0));
  else
  {
   bool ok = true;
   int diff = it.S[1] - it.S[0];
   rep(i, 2, sz(it.S)) if (it.S[i] - it.S[i - 1] != diff) ok = false;
   if (ok) ans.push_back(ii(it.F, diff));
  }
 }
 cout << sz(ans) << endl;
 rep(i, 0, sz(ans)) cout << ans[i].F << ' ' << ans[i].S << endl;
 
 return 0;
}
