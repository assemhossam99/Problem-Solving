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
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
string s;
int dp[105][10];
ii build[105][10];
bool solve(int id, int lastt)
{
 if (id == sz(s)) return (lastt == 0);
 if (~dp[id][lastt]) return dp[id][lastt];
 bool take = false, leave = false;
 leave = solve(id + 1, lastt);
 take = solve(id + 1, (lastt * 10 + (s[id] - '0')) % 8);
 if (take) build[id][lastt] = ii(id + 1, (lastt * 10 + (s[id] - '0')) % 8);
 else build[id][lastt] = ii(id + 1, lastt);
 return dp[id][lastt] = (take || leave);
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> s;
 if (solve(0, 8))
 {
  cout << "YES" << endl;
  ii cur = ii(0, 8);
  while (cur.F < sz(s))
  {
   if (build[cur.F][cur.S].S != cur.S) cout << s[cur.F];
   cur = build[cur.F][cur.S];
  }
 }
 else cout << "NO";
 
 return 0;
}
