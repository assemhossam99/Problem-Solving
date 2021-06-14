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
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
using namespace std;
 
vector<int> vec1, vec2;
int n, m;
int solve(int a)
{
 int cnt = 0; 
 for (auto it : vec1) if (it <= a) cnt++;
 for (auto it : vec2)
 {
  if (it > 0 and it <= a) cnt++;
  if (it < 0 and abs(it) <= cnt) cnt--;
 }
 return cnt;
}
 
int main()
{
 assem99;
 cin >> n >> m;
 vec1.resize(n);
 vec2.resize(m);
 rep(i, 0, n) cin >> vec1[i];
 rep(i, 0, m) cin >> vec2[i];
 int start = 0, end = 1e9, mid, ans = -1;
 while (start <= end)
 {
  mid = (start + end) / 2;
  if (solve(mid) > 0)
  {
   ans = mid;
   end = mid - 1;
  }
  else start = mid + 1;
 }
 ~ans ? cout << ans : cout << 0;
 
 return 0;
}
