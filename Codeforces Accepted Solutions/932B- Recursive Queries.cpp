#include <iostream>
#include <stdio.h>
#include <string>
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
using namespace std;
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
vector<int> v[10];
 
int solve(int n)
{
 if (n < 10) return n;
 ll ans = 1;
 while (n)
 {
  if (n % 10 != 0) ans *= (n % 10);
  n /= 10;
 }
 return solve(ans);
}
 
int main()
{
 assem99;
 int t; cin >> t;
 f(i, 1, 1e6 + 5)
 {
  int tmp = solve(i);
  v[tmp].push_back(i);
 }
 while (t--)
 {
  int l, r, k, cntr = 0; cin >> l >> r >> k;
  vector<int>::iterator start, end;
  start = lower_bound(v[k].begin(), v[k].end(), l);
  end = upper_bound(v[k].begin(), v[k].end(), r);
  cout << (end - v[k].begin()) - (start - v[k].begin()) << endl;
 }
 
 return 0;
}
