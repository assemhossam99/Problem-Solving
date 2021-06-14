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
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
using namespace std;
 
bool vis[N];
 
int main()
{
 assem99;
 int n, m; cin >> n >> m;
 rep(i, 0, m)
 {
  int a, b; cin >> a >> b;
  vis[a] = vis[b] = true;
 }
 int center;
 rep(i, 1, n + 1)
 {
  if (!vis[i])
  {
   center = i;
   break;
  }
 }
 cout << n - 1 << endl;
 rep(i, 1, n + 1) if (i != center) cout << center << ' ' << i << endl;
 
 return 0;
}
