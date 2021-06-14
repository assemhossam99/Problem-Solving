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
 
vector<ll> vec;
void solve(ll cnt, ll num)
{
 if(num)vec.push_back(num);
 if (cnt == 10) return;
 
 solve(cnt + 1, num * 10 + 4);
 solve(cnt + 1, num * 10 + 7);
}
 
ll bs(ll n)
{
 ll start = 0, end = sz(vec) - 1, mid, ans = sz(vec) - 1;
 while (start <= end)
 {
  mid = (start + end) / 2;
  if (vec[mid] >= n)
  {
   ans = mid;
   end = mid - 1;
  }
  else start = mid + 1;
 }
 return ans;
}
 
int main()
{
 assem99;
 solve(0, 0);
 sort(vec.begin(), vec.end());
 ll l, r; cin >> l >> r;
 ll start = bs(l), end = bs(r);
 ll ans = 0;
 rep(i, start, end + 1)
 {
  ans += ((min(r, vec[i]) - l) + 1) * vec[i];
  l += (min(r, vec[i]) - l + 1);
 }
 cout << ans;
 
 return 0;
}
