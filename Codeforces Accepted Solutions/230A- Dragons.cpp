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
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
 pair<int, int> arr[N];
int main()
{
 assem99;
 
 int h, n; cin >> h >> n;
 f(i, 0, n)
 {
  int a, b; cin >> a >> b;
  arr[i].F = a, arr[i].S = b;
 }
 sort(arr, arr + n);
 f(i, 0, n)
 {
  if (h > arr[i].F)
  {
   h += arr[i].S;
  }
  else
  {
   cout << "NO";
   return 0;
  }
 }
 cout << "YES";
 
 return 0;
}
