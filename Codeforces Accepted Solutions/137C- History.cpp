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
#define endline '\n'
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
 int n; cin >> n;
 vii vec;
 rep(i, 0, n)
 {
  int a, b; cin >> a >> b;
  vec.push_back(ii(a, b));
 }
 sort(vec.begin(), vec.end());
 int l = vec[0].F, r = vec[0].S, ans = 0;
 rep(i, 1 ,n)
 {
  if (vec[i].F != l and vec[i].S < r) ans++;
  else if (vec[i].F == l) r = max(r, vec[i].S);
  else l = vec[i].F, r = vec[i].S;
 }
 cout << ans;
 
 return 0;
}
