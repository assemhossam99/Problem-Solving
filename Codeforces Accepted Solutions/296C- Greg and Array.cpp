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
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
ll arr[N], l[N], r[N], d[N], pref[N], pref2[N];
 
int main()
{
 assem99;
 int n, m, k; cin >> n >> m >> k;
 rep(i, 1, n + 1) cin >> arr[i];
 rep(i, 1, m + 1) cin >> l[i] >> r[i] >> d[i];
 rep(i, 1, k + 1)
 {
  int a, b; cin >> a >> b;
  pref[a]++;
  pref[b + 1]--;
 }
 rep(i, 1, m + 1) pref[i] += pref[i - 1];
 rep(i, 1, m + 1)
 {
  pref2[l[i]] += d[i] * pref[i];
  pref2[r[i] + 1] -= d[i] * pref[i];
 }
 rep(i, 1, n + 1) pref2[i] += pref2[i - 1];
 rep(i, 1, n + 1) cout << arr[i] + pref2[i] << ' ';
 
 return 0;
}
