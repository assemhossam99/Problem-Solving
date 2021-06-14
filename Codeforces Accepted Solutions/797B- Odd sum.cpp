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
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int n; cin >> n;
 int ans = 0;
 vector<int> odd;
 rep(i, 0, n)
 {
  int a; cin >> a;
  if (a & 1) odd.push_back(a);
  else if((a % 2 == 0) and a > 0) ans += a;
 }
 sort(odd.rbegin(), odd.rend());
 ans += odd[0];
 int cur = ans;
 rep(i, 1, sz(odd))
 {
  cur += odd[i];
  if (cur & 1) ans = max(cur, ans);
 }
 cout << ans;
 
 return 0;
}
