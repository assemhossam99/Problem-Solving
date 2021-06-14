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
#define ii pair<int, int>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 ll sum = 0;
 f(i, 0, n) cin >> arr[i], sum += arr[i];
 sort(arr, arr + n, greater<int>());
 if (arr[n - 1] != 0) cout << "-1";
 else
 {
  if (sum % 3 == 0)
  {
   if (sum == 0) cout << "0";
   else
   {
    f(i, 0, n) cout << arr[i];
   }
  }
  else if (sum % 3 == 1)
  {
   bool found = false;
   for (int i = n - 1; i >= 0; i--)
   {
    if (arr[i] % 3 == 1)
    {
     found = true;
     arr[i] = -1;
     break;
    }
   }
   if (!found)
   {
    int cnt = 0, id1, id2;
    for (int i = n - 1; i >= 0; i--)
    {
     if (arr[i] % 3 == 2)
     {
      cnt++;
      if (cnt == 1) id1 = i;
      if (cnt == 2)
      {
       id2 = i;
       found = true;
       arr[id1] = arr[id2] = -1;
       break;
      }
     }
    }
   }
   if (!found) cout << "0";
   else
   {
    bool ok = false;
    f(i, 0, n) if (arr[i] > 0) ok = true;
    if (!ok) cout << "0";
    else
    f(i, 0, n) if (arr[i] >= 0) cout << arr[i];
    //else cout << "0";
   }
  }
  else if (sum % 3 == 2)
  {
   bool found = false;
   for (int i = n - 1; i >= 0; i--)
   {
    if (arr[i] % 3 == 2)
    {
     found = true;
     arr[i] = -1;
     break;
    }
   }
   if (!found)
   {
    int cnt = 0, id1, id2;
    for (int i = n - 1; i >= 0; i--)
    {
     if (arr[i] % 3 == 1)
     {
      cnt++;
      if (cnt == 1) id1 = i;
      if (cnt == 2)
      {
       id2 = i;
       found = true;
       arr[id1] = arr[id2] = -1;
       break;
      }
     }
    }
   }
   if (!found) cout << "0";
   else
   {
    bool ok = false;
    f(i, 0, n) if (arr[i] > 0) ok = true;
    if (!ok) cout << "0";
    else
     f(i, 0, n) if (arr[i] >= 0) cout << arr[i];
   }
  }
 }
 
 return 0;
}
