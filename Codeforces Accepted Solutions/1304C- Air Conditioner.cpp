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
 
int t[N], l[N], r[N];
 
int main()
{
 assem99;
 
 int q; cin >> q;
 while (q--)
 {
  int n, temp; cin >> n >> temp;
  f(i, 0, n) cin >> t[i] >> l[i] >> r[i];
  int mx = temp, mn = temp;
  bool bazet = false;
  f(i, 0, n)
  {
   if (!i)
   {
    mx += t[i];
    mn -= t[i];
   }
   else
   {
    mx += t[i] - t[i - 1];
    mn -= t[i] - t[i - 1];
   }
   if (mx < l[i] || mn > r[i])
   {
    bazet = true;
    break;
   }
   mx = min(mx, r[i]);
   mn = max(mn, l[i]);
  }
  if (bazet) cout << "NO" << endl;
  else cout << "YES" << endl;
 }
 
 return 0;
}
