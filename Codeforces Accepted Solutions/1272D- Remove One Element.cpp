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
#define ld long double
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N], pref[N], suf[N];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 bool bazet = false;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n - 1)
 {
  if (arr[i] >= arr[i + 1]) bazet = true;
 }
 if (!bazet)
 {
  cout << n;
  return 0;
 }
 pref[0] = suf[n - 1] = 0;
 pref[1] = suf[n - 2] = 1;
 int cntr = 2;
 f(i, 1, n - 1)
 {
  if (arr[i] > arr[i - 1])
  {
   pref[i + 1] = cntr;
   cntr++;
  }
  else
  {
   pref[i + 1] = 1;
   cntr = 2;
  }
 }
 cntr = 2;
 for (int i = n - 1; i > 1; i--)
 {
  if (arr[i - 1] < arr[i])
  {
   suf[i - 2] = cntr;
   cntr++;
  }
  else
  {
   if (i != 1)
   {
    suf[i - 2] = 1;
    cntr = 2;
   }
   
  }
 }
 
 //f(i, 0, n) cout << pref[i] << ' ';
 //cout << endl;
 //f(i, 0, n) cout << suf[i] << ' ';
 //cout << endl;
 
 int mx = 1;
 f(i, 0, n)
 {
  if (arr[i - 1] < arr[i + 1] && i != 0)
  {
   int ans = suf[i] + pref[i];
   mx = max(ans, mx);
  }
  else
  {
   mx = max(mx, max(suf[i], pref[i]));
  }
 }
 cout << mx;
 
 
 return 0;
}
