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
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  ll a, b, n, m; cin >> a >> b >> n >> m;
  if (n + m > a + b) cout << "No" << endl;
  else
  {
   ll mx = max(a, b), mn = min(a, b);
   if (mx - n <= mn)
   {
    n -= (mx - mn);
    mx = mn;
    if (n <= mx and m <= mn) cout << "Yes" << endl;
    else if (m < mn)
    {
     mn -= m;
     if (n <= mx + mn) cout << "Yes" << endl;
     else cout << "No" << endl;
    }
    else cout << "No" << endl;
   }
   else if (m <= mn) cout << "Yes" << endl;
   else cout << "No" << endl;
  }
 }
 
 return 0;
}
