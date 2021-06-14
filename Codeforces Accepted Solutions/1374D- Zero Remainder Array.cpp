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
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  map<ll, ll> mp;
  ll n, k; cin >> n >> k;
  bool notZero = true;
  rep(i, 0, n)
  {
   ll a; cin >> a;
   ll mod = a % k;
   if(mod) mp[k - mod]++, notZero = false;
  }
  if (notZero)
  {
   cout << 0 << endl;
   continue;
  }
  ll mxFreq = 0, mxNum = 0;
  for (auto it : mp)
  {
   if (it.S >= mxFreq)
   {
    mxFreq = it.S;
    mxNum = max(mxNum, it.F);
   }
  }
  ll ans = 0;
  ans += (mxFreq - 1) * k;
  ans += k - (k - (mxNum + 1));
  cout << ans << endl;
 }
 
 
 return 0;
}
