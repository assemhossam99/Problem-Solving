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
 
int cap[2000005];
 
int main()
{
 assem99;
 
 set<int> st;
 int n, t, arr[200005], a, b;
 cin >> n;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n)st.insert(i);
 cin >> t;
 while (t--)
 {
  int x; cin >> x;
  if (x == 1)
  {
   cin >> a >> b;
   set<int>::iterator it = st.lower_bound(a - 1);
   while (b != 0 && it != st.end())
   {
    a = *it;
    if (cap[a] + b <= arr[a])
    {
     cap[a] += b;
     b = 0;
    }
    else
    {
     b -= arr[a] - cap[a];
     cap[a] += arr[a] - cap[a];
     st.erase(a);
    }
    it = st.lower_bound(a);
   }
  }
  else if (x == 2)
  {
   cin >> a;
   cout << cap[a - 1] << endl;
  }
 }
 
 return 0;
}
