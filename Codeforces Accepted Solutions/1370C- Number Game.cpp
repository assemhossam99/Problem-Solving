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
 
int getDivisor(int n)
{
 int d = -1;
 for (int i = 2; i * i <= n; i++)
 {
  if (n % i == 0)
  {
   int tmp = n / i;
   if (tmp % 2 == 0 and i % 2 == 1 and tmp != 2) d = max(i, d);
   if (tmp % 2 == 1 and i % 2 == 0 and i != 2) d = max(d, tmp);
  }
 }
 return d;
}
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int cnt = 0;
  int n; cin >> n;
  while (n > 1)
  {
   cnt++;
   int d = getDivisor(n);
   if (n & 1) n = 1;
   else if (~d) n /= d;
   else n--;
  }
  if (cnt & 1) cout << "Ashishgup";
  else cout << "FastestFinger";
  cout << endline;
 }
 
 return 0;
}
