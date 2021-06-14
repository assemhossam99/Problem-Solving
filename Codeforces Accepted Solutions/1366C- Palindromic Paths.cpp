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
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int arr[50][50];
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int n, m; cin >> n >> m;
  rep(i, 0, n) rep(j, 0, m) cin >> arr[i][j];
  int ans = 0, l, r, steps = n + m - 1;
  steps /= 2;
  if (n >= m)
  {
   l = 0, r = n - 1;
   rep(k, 0, steps)
   {
    int i = l, j = 0;
    int zero = 0, one = 0;
    while (i >= 0 and j < m)
    {
     if (arr[i][j]) one++;
     else zero++;
     i--, j++;
    }
    i = r, j = m - 1;
    while (i < n and j >= 0)
    {
     if (arr[i][j]) one++;
     else zero++;
     i++, j--;
    }
    l++, r--;
    ans += min(zero, one);
   }
  }
  else
  {
   l = 0, r = m - 1;
   rep(k, 0, steps)
   {
    int i = 0, j = l, one = 0, zero = 0;
    while (i < n and j >= 0)
    {
     if (arr[i][j]) one++;
     else zero++;
     i++, j--;
    }
    i = n - 1, j = r;
    while (i >= 0 and j < m)
    {
     if (arr[i][j])one++;
     else zero++;
     i--, j++;
    }
    ans += min(zero, one);
    l++, r--;
   }
  }
  cout << ans << endl;
 }
 
 return 0;
}
