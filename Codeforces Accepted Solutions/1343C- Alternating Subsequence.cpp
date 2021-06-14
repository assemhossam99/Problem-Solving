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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  ll arr[N];
  int n; cin >> n;
  ll ans = 0;
  f(i, 0, n) cin >> arr[i];
  bool pos = (arr[0] > 0) ? true : false;
  ll best = arr[0];
  f(i, 1, n)
  {
   if (pos && arr[i] > 0) best = max(best, arr[i]);
   else if (pos && arr[i] < 0)
   {
    ans += best;
    pos = false;
    best = arr[i];
   }
   else if (!pos && arr[i] < 0) best = max(best, arr[i]);
   else if (!pos && arr[i] > 0)
   {
    pos = true;
    ans += best;
    best = arr[i];
   }
  }
  ans += best;
  cout << ans << endl;
 }
 
 return 0;
}
