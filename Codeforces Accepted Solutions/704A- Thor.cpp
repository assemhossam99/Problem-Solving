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
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
 
set<int> app[N];
set<ii> st;
bool vis[N];
 
int main()
{
 assem99;
 
 int total = 0;
 int n, q; cin >> n >> q;
 int i = 1;
 while (q--)
 {
  int a, x; cin >> a >> x;
  if (a == 1)
  {
   total++;
   st.insert(ii(i, x));
   app[x].insert(i);
   i++;
  }
  else if (a == 2)
  {
   total -= sz(app[x]);
   for (auto it : app[x]) vis[it] = true;
   app[x].clear();
  }
  else
  {
   while (!st.empty() && st.begin() -> F <= x) 
   {
    ii cur;
    cur.F = st.begin()->F, cur.S = st.begin()->S;
    st.erase(st.begin());
    if (!vis[cur.F])
    {
     vis[cur.F] = true;
     app[cur.S].erase(app[cur.S].begin());
     total--;
    }
   }
  }
  cout << total<<endl;
 }
 
 return 0;
}
