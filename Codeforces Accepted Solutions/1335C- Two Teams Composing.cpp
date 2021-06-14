#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdio>
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
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
 
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  map<int, int> mp;
  int brr[N];
  int n; cin >> n;
  f(i, 0, n)
  {
   cin >> brr[i];
   mp[brr[i]]++;
  }
  int mxCntr = -1, mx = -1;
  for (auto it : mp)
  {
   if (it.S > mxCntr)
   {
    mxCntr = it.S;
    mx = it.F;
   }
  }
  int ans = 0;
  f(i, 0, n) if (brr[i] == mx) brr[i] = -1;
  sort(brr, brr + n);
  f(i, 0, n)
  {
   if (!i)
   {
    if (brr[i] != -1 && mxCntr)
    {
     mxCntr--;
     ans++;
    }
   }
   else if(brr[i] != -1 && mxCntr && brr[i] != brr[i - 1])
   {
    mxCntr--;
    ans++;
   }
  }
  if (mxCntr > 1) ans++;
  cout << ans << endl;
 }
 
 return 0;
}
