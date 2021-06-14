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
 
 int t, n;
 set<int> st;
 cin >> t;
 while (t--)
 {
  st.clear();
  st.insert(0);
  cin >> n;
  for (int i = 1; i * i <= n; i++)
  {
   st.insert(i);
   st.insert(n / i);
  }
  set<int>::iterator it;
  cout << st.size() << endl;
  for (it = st.begin(); it != st.end(); it++)
   cout << *it << ' ';
  cout << endl;
 }
 
 return 0;
}
