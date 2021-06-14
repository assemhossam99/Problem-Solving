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
 
ll arr[N], brr[N], crr[N];
 
int main()
{
 assem99;
 
 vector<ll> ans;
 ll n; cin >> n;
 f(i, 0, n) cin >> arr[i] >> brr[i] >> crr[i];
 f(i, 0, n)
 {
  if (crr[i] >= 0)
  {
   ans.push_back(i + 1);
   ll neg = arr[i];
   ll all = 0;
   f(j, i + 1, n)
   {
    if (crr[j] < 0) continue;
    if (neg) crr[j] -= neg--;
    crr[j] -= all;
    if (crr[j] < 0) all += brr[j];
   }
  }
 }
 cout << sz(ans) << endl;
 f(i, 0, sz(ans)) cout << ans[i] << ' ';
 
 return 0;
}
