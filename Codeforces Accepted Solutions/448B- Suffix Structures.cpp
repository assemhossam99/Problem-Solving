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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[30], brr[30];
 
int main()
{
 assem99;
 
 ll n, m, k;
 cin >> n >> m >> k;
 
 ll start = 1, end = 1e9 * 1e9, mid, ans = 0, fans = 0;
 while (start <= end)
 {
  ans = 0;
  mid = (start + end) / 2;
  f(i, 1, n + 1) ans += min(m, mid / i);
  if (ans >= k)
  {
   fans = mid;
   end = mid - 1;
  }
  else start = mid + 1;
 }
 cout << fans;
 return 0;
}
