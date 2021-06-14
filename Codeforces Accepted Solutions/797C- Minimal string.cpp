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
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
char mn[N];
 
int main()
{
 assem99;
 string s; cin >> s;
 string t = "", u = "";
 mn[sz(s) - 1] = s[sz(s) - 1];
 for (int i = sz(s) - 2; i >= 0; i--) mn[i] = min(s[i], mn[i + 1]);
 rep(i, 0, sz(s))
 {
  while (sz(t) and t.back() <= mn[i])
  {
   u += t.back();
   t.pop_back();
  }
  t += s[i];
 }
 while (sz(t))
 {
  u += t.back();
  t.pop_back();
 }
 cout << u;
 
 return 0;
}
