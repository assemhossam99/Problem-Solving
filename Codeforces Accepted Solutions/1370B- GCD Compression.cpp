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
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  vector<int> o, e;
  vector<int> vec;
  int n; cin >> n;
  rep(i, 0, 2 * n)
  {
   int a; cin >> a;
   if (a & 1) o.push_back(i + 1);
   else e.push_back(i + 1);
  }
  int ans = 0;
  for (int i = 0; i + 1 < e.size(); i += 2)
  {
   if (ans == n - 1)break;
   cout << e[i] << ' '<<e[i + 1] << endl;
   ans++;
  }
  for (int i = 0; i + 1 < o.size(); i += 2)
  {
   if (ans == n - 1)break;
   cout << o[i] << ' ' << o[i + 1] << endl;
   ans++;
  }
 }
 
 return 0;
}
