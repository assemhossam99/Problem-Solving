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
 
int arr[N], sum[N];
 
int main()
{
 assem99;
 
 int n, k, t, cntr = 0;
 cin >> n >> k >> t;
 f(i, 0, n)
 {
  int l, r;
  cin >> l >> r;
  arr[l]++;
  arr[r + 1]--;
 }
 f(i, 1, N) arr[i] = arr[i] + arr[i - 1];
 f(i, 0, N)
 {
  if (arr[i] >= k)
  {
   cntr++;
  }
  sum[i] = cntr;
 }
 while (t--)
 {
  int a, b; cin >> a >> b;
  int ans = sum[b] - sum[a - 1];
  cout << ans << endl;
 }
 
 return 0;
}
