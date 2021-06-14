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
 
int L[N], R[N], arr[N];
 
int main()
{
 assem99;
 int n, l, r, Ql, Qr; cin >> n >> l >> r >> Ql >> Qr;
 rep(i, 1, n + 1) cin >> arr[i];
 L[1] = arr[1], R[n] = arr[n];
 rep(i, 2, n + 1) L[i] = arr[i] + L[i - 1];
 for (int i = n - 1; i >= 0; i--) R[i] = R[i + 1] + arr[i];
 
 ll ans = 1e9;
 rep(i, 0, n + 1)
 {
  ll cur = L[i] * l + R[i + 1] * r;
  if (i > n - i) cur += (i * 2 - n - 1) * Ql;
  else if (i < n - i) cur += (n - i * 2 - 1) * Qr;
  ans = min(ans, cur);
 }
 cout << ans;
 
 return 0;
}
