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
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int ans1 = 1e9, ans2 = 1e9, ans3 = 1e9;
  int n, x, y, d; cin >> n >> x >> y >> d;
  int diff = abs(x - y);
  if (diff % d == 0) cout << diff / d << endl;
  else
  {
   if ((y - 1) % d == 0)
   {
    diff = x - 1;
    int ans = diff / d + ((diff % d) != 0);
    ans += (y - 1) / d;
    ans1 = ans;
   }
   if ((n - y) % d == 0)
   {
    diff = n - x;
    int ans = diff / d + ((diff % d) != 0);
    ans += (n - y) / d;
    ans2 = ans;
   }
   if (ans1 != 1e9 or ans2 != 1e9) cout << min(ans1, ans2) << endl;
   else cout << "-1" << endl;
  }
 }
 
 return 0;
}