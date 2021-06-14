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
#include <unordered_map>
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
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
vector<int> pop, alice, both, used;
 
int main()
{
 assem99;
 int n, k; cin >> n >> k;
 rep(i, 0, n)
 {
  int t, a, b; cin >> t >> a >> b;
  if (a and b) both.push_back(t);
  else if (a) alice.push_back(t);
  else if (b) pop.push_back(t);
 }
 int sizee = 0;
 if (sz(alice) + sz(both) < k or sz(pop) + sz(both) < k) return cout << "-1", 0;
 ll ans = 0;
 sort(both.begin(), both.end());
 sort(alice.rbegin(), alice.rend());
 sort(pop.rbegin(), pop.rend());
 for (auto it : both)
 {
  if (sizee == k) break;
  sizee++;
  ans += it;
  used.push_back(it);
 }
 while (sizee < k)
 {
  ans += pop.back();
  ans += alice.back();
  pop.pop_back();
  alice.pop_back();
  sizee++;
 }
 sort(used.begin(), used.end());
 sort(pop.rbegin(), pop.rend());
 sort(alice.rbegin(), alice.rend());
 if (sz(used) and sz(pop) and sz(alice))
 {
  while (sz(pop) and sz(alice) and sz(used) and pop.back() + alice.back() < used.back())
  {
   ans -= used.back();
   ans += alice.back();
   ans += pop.back();
   used.pop_back();
   alice.pop_back();
   pop.pop_back();
  }
 }
 cout << ans;
 return 0;
}
