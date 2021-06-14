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
using namespace std;
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
ll arr[N], pref[N];
 
int main()
{
 assem99;
 
 int n, q; cin >> n >> q;
 f(i, 0, n) cin >> arr[i];
 pref[0] = arr[0];
 f(i, 1, n) pref[i] = pref[i - 1] + arr[i];
 ll sum = 0;
 while (q--)
 {
  ll a; cin >> a;
  sum += a;
  ll ans = upper_bound(pref, pref + n, sum) - pref;
  if (ans == n) sum = 0;
  if (ans == n) ans = n;
  else ans = n - ans;
  cout << ans << endl;
 }
 
 return 0;
}
