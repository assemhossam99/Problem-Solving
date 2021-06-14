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
 
int brr[5005];
 
int main()
{
 assem99;
 
 int n, m, k, arr[105], l = 1e5, r = 1e5;
 cin >> n >> m >> k;
 f(i, 1, n + 1) cin >> arr[i];
 f(i, m + 1, n + 1)
 {
  if (arr[i] <= k && arr[i] != 0)
  {
   r = i;
   break;
  }
 }
 for(int i = m - 1; i >= 1; i--)
 {
  if (arr[i] <= k && arr[i] != 0)
  {
   l = i;
   break;
  }
 }
 if (abs(l - m) < abs(r - m))
 {
  cout << abs(l - m) * 10;
 }
 else cout << abs(r - m) * 10;
 
 return 0;
}
