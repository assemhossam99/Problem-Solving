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
 
 ll t, n, s, arr[100005];
 cin >> t;
 while (t--)
 {
  ll sum = 0, ans = 0;
  int id = 0;
  cin >> n >> s;
  f(i, 0, n)
  {
   cin >> arr[i];
   sum += arr[i];
  }
  if (sum <= s) cout << '0' << endl;
  else
  {
   sum = 0;
   f(i, 0, n)
   {
    sum += arr[i];
    if (sum > s)
    {
     id = i;
     break;
    }
   }
   ll mx = -1;
   f(i, 0, id + 1)
   {
    if (arr[i] > mx)
    {
     ans = i + 1;
     mx = arr[i];
    }
   }
   cout << ans << endl;
  }
 }
 
 return 0;
}
