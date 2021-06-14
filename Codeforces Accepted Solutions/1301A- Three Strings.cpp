#include <iostream>
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
 
 int t;
 string a, b, c;
 cin >> t;
 while (t--)
 {
  int cntr = 0;
  cin >> a >> b >> c;
  f(i, 0, sz(a))
  {
   if (c[i] == a[i] || c[i] == b[i])
    cntr++;
  }
  if (cntr == sz(a))
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
 
 return 0;
}
