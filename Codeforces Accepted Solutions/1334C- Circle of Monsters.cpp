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
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
 
pair<ll, ll> arr[N];
bool boom[N];
ll more[N];
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  ll sum = 0;
  f(i, 0, n) cin >> arr[i].F>>arr[i].S;
  f(i, 0, n)
  {
   if (i == n - 1)
   {
    if (arr[i].S >= arr[0].F) boom[i] = true;
    else
    {
     boom[i] = false;
     more[i] = arr[0].F - arr[i].S;
     sum += more[i];
    }
   }
   else
   {
    if (arr[i].S >= arr[i + 1].F) boom[i] = true;
    else
    {
     boom[i] = false;
     more[i] = arr[i + 1].F - arr[i].S;
     sum += more[i];
    }
   }
  }
  ll ans = 0, mn = 1e18;
  f(i, 0, n)
  {
   if (i == 0)
   {
    ans += arr[i].F + sum;
    if (boom[n - 1] == false) ans -= more[n - 1];
    mn = min(ans, mn);
    ans = 0;
   }
   else
   {
    ans += arr[i].F + sum;
    if (boom[i - 1] == false) ans -= more[i - 1];
    mn = min(ans, mn);
    ans = 0;
   }
  }
  cout << mn << endl;
 }
 
 return 0;
}
