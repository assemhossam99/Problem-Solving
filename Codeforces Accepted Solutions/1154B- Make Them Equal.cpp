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
 
int main()
{
 assem99;
 
 bool sol = true;
 int arr[N];
 int n; cin >> n;
 f(i, 0, n) cin >> arr[i];
 sort(arr, arr + n);
 int diff = arr[n - 1] - arr[0];
 int tmp = diff;
 if (diff == 0) cout << "0";
 else
 {
  diff /= 2;
  f(i, 0, n)
  {
   //cout << diff << endl;
   int mid = (arr[0] + arr[n - 1]) / 2;
   if (arr[i] + diff != mid && arr[i] != mid && arr[i] - diff != mid) sol = false;
  }
  if (sol)
  {
   //cout << "Hi";
   cout << diff;
  }
  else
  {
   sol = true;
   f(i, 0, n)
   {
    if (arr[i] + tmp != arr[n - 1] && arr[i] != arr[n - 1]) sol = false;
   }
   if (sol)cout << tmp;
   else cout << "-1";
  }
 }
 
 return 0;
}
