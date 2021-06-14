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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
string arr[500];
int n, m;
bool check(string s)
{
 rep(i, 0, n)
 {
  int cnt = 0;
  rep(j, 0, m) if (s[j] != arr[i][j]) cnt++;
  if (cnt > 1) return false;
 }
 return true;
}
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  set<string> st;
   cin >> n >> m;
  rep(i, 0, n) cin >> arr[i];
  string s = arr[0];
  st.insert(s);
  rep(i, 0, m)
  {
   if (i) s[i - 1] = arr[0][i - 1];
   for (char c = 'a'; c - 'a' < 26; c++)
   {
    s[i] = c;
    st.insert(s);
   }
  }
  bool ok = false;
  for (auto it : st)
  {
   if (check(it))
   {
    cout << it << endl;
    ok = true;
    break;
   }
  }
  if (!ok)cout << "-1" << endl;
 }
 
 return 0;
}
