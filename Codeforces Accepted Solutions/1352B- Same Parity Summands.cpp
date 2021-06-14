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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  bool oke = false, oko = false;
  int n, k; cin >> n >> k;
  int e = 2 * (k - 1);
  int o = k - 1;
  if (e <= n && (n - e) && (n - e) % 2 == 0) oke = true;
  if (o <= n && (n - o) && (n - o) % 2 == 1) oko = true;
 
  if (!oke && !oko) cout << "NO" << endl;
  else if (oke)
  {
   cout << "YES" << endl;
   rep(i, 0, k - 1) cout << "2 ";
   cout << (n - e) << endl;
  }
  else
  {
   cout << "YES" << endl;
   rep(i, 0, k - 1) cout << "1 ";
   cout << (n - o) << endl;
  }
 }
 
 return 0;
}
