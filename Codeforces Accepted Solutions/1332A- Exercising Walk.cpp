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
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int l, r, u, d; cin >> l >> r >> d >> u;
  int x, y, x1, y1, x2, y2; cin >> x >> y >> x1 >> y1 >> x2 >> y2;
  int posX = x + (r - l), posY = y + (u - d);
  if (posX <= x2 && posX >= x1 && posY <= y2 && posY >= y1)
  {
   if (l && r && u && d)
   {
    if ((abs(x - x1) >= 1 || abs(x - x2) >= 1) && (abs(y - y1) >= 1 || abs(y - y2) >= 1)) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
   else if (l && r)
   {
    if (abs(x - x1) >= 1 || abs(x - x2) >= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
   else if (u && d)
   {
    if (abs(y - y1) >= 1 || abs(y - y2) >= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
   else cout << "YES" << endl;
  }
  else cout << "NO" << endl;
 }
 
 return 0;
}
