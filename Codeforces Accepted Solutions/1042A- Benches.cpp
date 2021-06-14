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
 
int main()
{
 assem99;
 
 int n, m, arr[N], mx = -1, mxans = -1, mnans = 1e9;
 cin >> n >> m;
 f(i, 0, n)
 {
  cin >> arr[i];
  if (arr[i] > mx) mx = arr[i];
 }
 mnans = mx;
 mxans = m + mx;
 f(i, 0, n)
 {
  int tmp = min(m, mx - arr[i]);
  arr[i] += tmp;
  m -= tmp;
  mnans = max(mnans, arr[i]);
 }
 if (m % n == 0) mnans += m / n;
 else mnans += (m / n) + 1;
 cout << mnans << ' ' << mxans;
 
 return 0;
}
