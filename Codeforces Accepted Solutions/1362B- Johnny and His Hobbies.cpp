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
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  set<int> st;
  int n; cin >> n;
  rep(i, 0, n)
  {
   int a; cin >> a;
   st.insert(a);
  }
  bool ok = false;
  rep(i, 1, 1025)
  {
   set<int> st2;
   for (auto it : st)
   {
    st2.insert(it ^ i);
   }
   //cerr << "FUCK";
   if (st == st2)
   {
    ok = true;
    cout << i << endl;
    break;
   }
  }
  if (!ok) cout << "-1" << endl;
 }
 
 return 0;
}
