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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll n, k; 
ll arr[N];
bool valid(ll a)
{
 ll sum = 0;
 for(ll i = n / 2; i < n; i++)
 {
  if (a > arr[i])
  {
   sum += a - arr[i];
  }
 }
 if (k >= sum) return true;
 else return false;
}
 
int main()
{
 assem99;
 
 
 cin >> n >> k;
 f(i, 0, n) cin >> arr[i];
 sort(arr, arr + n);
 ll start = 0, end = 1e11, mid, ans = 0;
 while (start <= end)
 {
  mid = (start + end) / 2;
  if (valid(mid))
  {
   ans = mid;
   start = mid + 1;
  }
  else end = mid - 1;
 }
 cout << ans;
 
 return 0;
}
