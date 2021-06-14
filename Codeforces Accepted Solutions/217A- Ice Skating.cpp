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
const int MOD = 1e9 + 7, N = 1e4 + 5;
const double pi = acos(-1);
using namespace std;
 
bool vis[1005][1005];
vector<int> xx, yy;
int n, ans = 0;
int dfs(int x, int y)
{
 vis[x][y] = true;
 rep(i, 0, n)if (!vis[xx[i]][yy[i]] and (xx[i] == x or yy[i] == y)) dfs(xx[i], yy[i]); 
 return 1;
}
 
 
int main()
{
 assem99;
 cin >> n;
 rep(i, 0, n)
 {
  int a, b; cin >> a >> b;
  xx.push_back(a);
  yy.push_back(b);
 }
 rep(i, 0, n) if (!vis[xx[i]][yy[i]]) ans += dfs(xx[i], yy[i]);
 cout << ans - 1;
 
 
 return 0;
}
