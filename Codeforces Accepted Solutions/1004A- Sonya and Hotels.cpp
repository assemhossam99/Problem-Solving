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
 
ll arr[N];
 
int main()
{
 assem99;
 
 map<ll, bool> mp;
 ll n, d; cin >> n >> d;
 if (n == 1)
 {
  cout << '2';
  return 0;
 }
 ll ans = 2;
 f(i, 0, n) cin >> arr[i];
 sort(arr, arr + n);
 f(i, 0, n)
 {
  if (i == 0)
  {
   ll next = arr[i] + d;
   if (!mp[next])
   {
    if (arr[i + 1] - next >= d)ans++;
    mp[next] = true;
   }
 
  }
  else if (i == n - 1)
  {
   ll last = arr[i] - d;
   if (!mp[last])
   {
    if (last - arr[i - 1] >= d)ans++;
    mp[last] = true;
   }
  }
  else
  {
   ll next = arr[i] + d;
   if (!mp[next])
   {
    if (arr[i + 1] - next >= d)ans++;
    mp[next] = true;
   }
   ll last = arr[i] - d;
   if (!mp[last])
   {
    if (last - arr[i - 1] >= d)ans++;
    mp[last] = true;
   }
  }
 }
 cout << ans;
 
 return 0;
}
