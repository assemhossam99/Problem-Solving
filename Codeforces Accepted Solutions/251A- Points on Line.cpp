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
 
ll ncr(ll n, ll r) {
 ll ans = 1, rfact = 2;
 for (ll i = n - r + 1; i <= n; i++) {
  ans *= i;
  if (ans%rfact == 0 && rfact <= r)
   ans /= rfact++;
 }
 return ans;
}
ll arr[N];
int main()
{
 assem99;
 ll n, d; cin >> n >> d;
 ll cnt = 2, p1 = 0, p2 = 2, ans = 0;
 rep(i, 0, n) cin >> arr[i];
 bool ok = false;
 while (p2 < n)
 {
  if (abs(arr[p2] - arr[p1]) <= d)
  {
   cnt++;
   p2++;
   if (cnt >= 3) ans += ((cnt - 1) * (cnt - 2) / 2);
  }
  else p1++, cnt--;
 }
 
 cout << ans;
 
 return 0;
}
