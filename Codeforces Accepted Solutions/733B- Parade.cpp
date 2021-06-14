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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 5e5 + 5;
const double pi = acos(-1);
 
ll arr[N], brr[N];
 
int main()
{
 assem99;
 
 ll n; cin >> n;
 ll l = 0, r = 0;
 f(i, 0, n)
 {
  cin >> arr[i] >> brr[i];
  l += arr[i], r += brr[i];
 }
 ll mx = abs(l - r);
 ll ans = 0;
 f(i, 0, n)
 {
  ll curL = l, curR = r;
  curL -= arr[i], curL += brr[i];
  curR -= brr[i], curR += arr[i];
  if (abs(curL - curR) > mx)
  {
   mx = abs(curL - curR);
   ans = i + 1;
  }
 }
 cout << ans;
 return 0;
}
