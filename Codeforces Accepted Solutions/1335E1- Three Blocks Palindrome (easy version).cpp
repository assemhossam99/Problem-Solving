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
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
 
int pref[N][N], arr[N];
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  f(i, 1, n + 1) cin >> arr[i];
  f(i, 1, 27)
  {
   f(j, 1, n + 1)
   {
    pref[i][j] = pref[i][j - 1];
    if (arr[j] == i) pref[i][j]++;
   }
  }
  int ans = 0;
  f(i, 1, 27) ans = max(ans, pref[i][n]);
 
  f(i, 1, n + 1)
  {
   f(j, i + 2, n + 1)
   {
    int minn = 0, block = 0;
    f(k, 1, 27)
    {
     int l = pref[k][i];
     int r = pref[k][n] - pref[k][j - 1];
     int mn = min(l, r);
     minn = max(minn, mn);
     block = max(block, pref[k][j - 1] - pref[k][i]);
    }
    ans = max(ans, 2 * minn + block);
   }
  }
  cout << ans << endl;
 }
 
 return 0;
}
