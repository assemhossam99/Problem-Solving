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
 
int mod(int a, int b)
{
 int ans = a / b;
 int diff1 = abs(a - ans * b);
 int diff2 = abs(a - (ans * b) + b);
 return min(diff1, diff2);
}
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  set<int> st;
  int arr[N];
  int n; cin >> n;
  rep(i, 0, n)
  {
   int a; cin >> a;
   int cur = a + i;
   int m = cur % n;
   if (m < 0) m += n;
   st.insert(m);
  }
  if (sz(st) == n) cout << "YES" << endl;
  else cout << "NO" << endl;
 }
 
 return 0;
}
