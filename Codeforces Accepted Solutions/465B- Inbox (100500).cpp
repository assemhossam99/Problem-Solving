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
const int MOD = 1e9 + 7, N = 5e5 + 5;
const double pi = acos(-1);
 
 int arr[N], cntr = 0;
int main()
{
 assem99;
 
 int n; cin >> n;
 int start = 0, end = 0;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n)
 {
  if (arr[i] == 1)
  {
   start = i;
   break;
  }
 }
 f(i, 0, n) if (arr[i] == 1) end = i;
 f(i, start, end + 1)
 {
  //cntr++;
  if (arr[i] == 1)
  {
   cntr++;
   if (arr[i + 1] == 1)continue;
   else if (arr[i + 2] == 1)
   {
    cntr++, i++;
   }
   else
   {
    if (i != end)cntr++;
   }
  }
 }
 cout << cntr;
 
 return 0;
}
