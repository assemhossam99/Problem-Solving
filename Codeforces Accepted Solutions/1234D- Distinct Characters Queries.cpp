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
const int MOD = 1e9 + 7, N = 5e5 + 5;
const double pi = acos(-1);
 
set<int> st[30];
 
int main()
{
 assem99;
 
 string s; cin >> s;
 f(i, 0, sz(s)) st[s[i] - 'a'].insert(i);
 int t; cin >> t;
 while (t--)
 {
  int op;  cin >> op;
  if (op == 1)
  {
   int id; char c; cin >> id >> c; id--;
   st[s[id] - 'a'].erase(id);
   s[id] = c;
   st[s[id] - 'a'].insert(id);
  }
  else
  {
   int l, r; cin >> l >> r; l--, r--;
   int cntr = 0;
   f(i, 0, 26)
   {
    auto id = st[i].lower_bound(l);
    if (id == st[i].end() || *id > r) continue;
    else cntr++;
   }
   cout << cntr << endl;
  }
 }
 
 return 0;
}
