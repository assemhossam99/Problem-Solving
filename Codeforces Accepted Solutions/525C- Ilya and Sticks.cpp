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
 
ll arr[N];
 
int main()
{
 assem99;
 
 
 vector<ll> areas;
 ll n; cin >> n;
 f(i, 0, n) cin >> arr[i];
 sort(arr, arr + n, greater<ll>());
 f(i, 0, n)
 {
  if (arr[i] - arr[i + 1] <= 1)
  {
   areas.push_back(arr[i + 1]);
   i++;
  }
 }
 sort(areas.rbegin(), areas.rend());
 ll ans = 0;
 for (int i = 1; i < sz(areas); i += 2)
 {
  ans += areas[i] * areas[i - 1];
 }
 cout << ans;
 
 return 0;
}
