#include <iostream>
#include <stdio.h>
#include <string>
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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll cnt1, cnt2, xx, yy;
 
bool av(ll n)
{
 ll d1 = n / xx, d2 = n / yy;
 ll both = n / (xx * yy);
 ll other = n - d1 - d2 + both;
 d1 -= both, d2 -= both;
 ll tmpCnt1 = cnt1 - d2, tmpCnt2 = cnt2 - d1;
 if (tmpCnt1 < 0) tmpCnt1 = 0; if (tmpCnt2 < 0) tmpCnt2 = 0;
 ll tmp = tmpCnt1 + tmpCnt2;
 if (tmp <= other) return true;
 else return false;
}
 
int main()
{
 assem99;
 
 cin >> cnt1 >> cnt2 >> xx >> yy;
 ll start = 0, end = 1e18, mid, ans;
 while (start <= end)
 {
  mid = (start + end) / 2;
  if (av(mid))
  {
   end = mid - 1;
   ans = mid;
  }
  else start = mid + 1;
 }
 cout << ans;
 
 return 0;
}
