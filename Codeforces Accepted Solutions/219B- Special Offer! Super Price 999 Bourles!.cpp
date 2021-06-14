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
 
int length(ll n)
{
 int cnt = 0;
 while (n)
 {
  cnt++;
  n /= 10;
 }
 return cnt;
}
 
int cntNine(ll n)
{
 int cnt = 0;
 while (n % 10 == 9)
 {
  cnt++;
  n /= 10;
 }
 return cnt;
}
 
int main()
{
 assem99;
 ll n, d; cin >> n >> d;
 ll ans = n;
 int l = length(n);
 for (ll i = l - 1; i >= 1; i--)
 {
  ll p = pow(10LL, i);
  ll cur = n - (n % p) - 1;
  if (n - cur <= d)
  {
   if (cntNine(ans) < cntNine(cur)) ans = cur;
   break;
  }
 }
 cout << ans;
 
 return 0;
}
