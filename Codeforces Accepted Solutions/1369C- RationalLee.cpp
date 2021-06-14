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
 
int arr[N], brr[N];
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int cnt = 0;
  int n, m; cin >> n >> m;
  rep(i, 0, n) cin >> arr[i];
  rep(i, 0, m)
  {
   cin >> brr[i];
   cnt++;
  }
  sort(arr, arr + n);
  sort(brr, brr + m, greater<int>());
  ll ans = 0, p = 0;
  rep(i, 0, m)
  {
   if (brr[i] == 1) ans += arr[n - cnt] * 2, cnt--;
   else ans += arr[p] + arr[n - cnt], cnt--, p += brr[i] - 1;
  }
  cout << ans << endl;
 }
 
 return 0;
}
