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
 
 int t, n, m, ans[30];
 int wrongs[200005];
 string s;
 cin >> t;
 while (t--)
 {
  int cntr = 0;
  cin >> n >> m >> s;
  f(i, 0, 26) ans[i] = 0;
  f(i, 0, 200005) wrongs[i] = 0;
  f(i, 0, m)
  {
   int x; cin >> x;
   wrongs[x - 1] ++;
  }
  f(i, 0, sz(s))
  {
   ans[s[i] - 'a']++;
  }
  f(i, 0, n)
  {
   ans[s[i] - 'a'] += m;
   if (wrongs[i] > 0)m -= wrongs[i];
  }
  f(i, 0, 26) cout << ans[i] << ' ';
  cout << endl;
 }
 
 return 0;
}
