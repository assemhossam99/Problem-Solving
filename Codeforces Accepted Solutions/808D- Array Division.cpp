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
 
 
int main()
{
 assem99;
 
 vector<ll> arr;
 ll prefSum = 0, suffSum = 0;
 multiset<ll> pref, suff;
 int n; cin >> n;
 f(i, 0, n)
 {
  int a; cin >> a;
  arr.push_back(a);
  suff.insert(arr[i]);
  suffSum += arr[i];
 }
 
 f(i, 0, n)
 {
  if (prefSum < suffSum)
  {
   if ((suffSum - prefSum) % 2 == 0)
   {
    if (suff.find((suffSum - prefSum) / 2) == suff.end())
    {
     prefSum += arr[i]; suffSum -= arr[i];
     pref.insert(arr[i]); suff.erase(suff.find(arr[i]));
    }
    else
    {
     cout << "YES";
     return 0;
    }
   }
  }
  else if (prefSum > suffSum)
  {
   if ((prefSum - suffSum) % 2 == 0)
   {
    if (pref.find((prefSum - suffSum) / 2) == pref.end())
    {
     prefSum += arr[i]; suffSum -= arr[i];
     pref.insert(arr[i]); suff.erase(suff.find(arr[i]));
    }
    else
    {
     cout << "YES";
     return 0;
    }
   }
  }
  else
  {
   cout << "YES";
   return 0;
  }
 }
 cout << "NO";
 
 return 0;
}
