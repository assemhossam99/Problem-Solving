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
 
 int t; cin >> t;
 while (t--)
 {
  int n, k; cin >> n >> k;
  bool can = false;
  if (n % 2 == 0 && k % 2 == 0) can = true;
  else if (n % 2 == 1 && k % 2 == 1) can = true;
  else if (n % 2 == 0 && k % 2 == 1) can = false;
  else can = false;
  
  if (!can) cout << "NO" << endl;
  else
  {
   if (sqrt(n) >= k) cout << "YES";
   else cout << "NO";
   cout << endl;
  }
 }
 
 return 0;
}
