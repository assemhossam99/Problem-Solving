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
#define ever (;;)
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int arr[N];
  int n; cin >> n;
  set < pair<int, ii>> st;
  st.insert({ -n, ii(0, n - 1) });
  int i = 1;
  while (sz(st))
  {
   auto cur = *st.begin();
   st.erase(st.begin());
   int l = cur.S.F, r = cur.S.S;
   int mid = (l + r) / 2;
   arr[mid] = i++;
   if (l < mid) st.insert({ -(mid - l), ii(l, mid - 1) });
   if (r > mid) st.insert({ -(r - mid), ii(mid + 1, r) });
  }
  rep(i, 0, n) cout << arr[i] << ' ';
  cout << endl;
 }
 
 return 0;
}
