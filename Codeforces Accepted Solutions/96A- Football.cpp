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
 
 string s;
 int cntr = 1;
 cin >> s;
 f(i, 1, sz(s))
 {
  if (cntr == 7)
  {
   cout << "YES";
   return 0;
  }
  if (s[i] == s[i - 1])
   cntr++;
  else cntr = 1;
 }
 if (cntr == 7) cout << "YES";
 else cout << "NO";
 
 return 0;
}
