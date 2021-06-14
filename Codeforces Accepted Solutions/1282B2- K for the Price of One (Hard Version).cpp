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
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int arr[N], pref[N];
  int ans = 0;
  int n, p, k; cin >> n >> p >> k;
  f(i, 0, n) cin >> arr[i];
  sort(arr, arr + n);
  pref[0] = arr[0];
  f(i, 1, n) pref[i] = arr[i] + pref[i - 1];
  int temp = p;
  f(i, 0, k + 1)
  {
   p = temp;
   int cntr = 0;
   if (i) p -= pref[i - 1];
   if (p < 0) break;
   for (int j = i + k - 1; j < n; j += k)
   {
    if (p >= arr[j])
    {
     cntr += k;
     p -= arr[j];
    }
    else break;
   }
   ans = max(ans, cntr + i);
  }
  cout << ans << endl;
 }
 
 return 0;
}
