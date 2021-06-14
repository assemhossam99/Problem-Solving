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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int arr[N], n, ans;
int solve(int shift)
{
 int cnt = 0, cur;
 rep(i, 0, n)
 {
  if ((arr[i] >> shift) & 1)
  {
   cnt++;
   cur = arr[i];
  }
 }
 if (cnt == 1) ans = cur;
 return cnt;
}
map<int, bool> mp;
int main()
{
 assem99;
 cin >> n;
 rep(i, 0, n) cin >> arr[i];
 for(int i = 31; i >= 0; i--)
 {
  if (solve(i) == 1)
  {
   mp[ans] = true;
   cout << ans << ' ';
   break;
  }
 }
 rep(i, 0, n)
 {
  if (!mp[arr[i]]) cout << arr[i] << ' ';
 }
 return 0;
}
