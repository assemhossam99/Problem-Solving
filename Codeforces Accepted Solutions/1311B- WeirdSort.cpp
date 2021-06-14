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
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
bool pos[105];
 
int main()
{
 assem99;
 int arr[105];
 int t; cin >> t;
 while (t--)
 {
  memset(pos, false, sizeof pos);
  int n, m; cin >> n >> m;
  rep(i, 1, n + 1) cin >> arr[i];
  rep(i, 1, m + 1)
  {
   int a; cin >> a;
   pos[a] = true;
  }
  rep(i, 1, 101) for (int i = n; i > 1; i--) if (arr[i] < arr[i - 1] and pos[i - 1]) swap(arr[i], arr[i - 1]);
  bool ok = true;
  rep(i, 2, n + 1) ok &= (arr[i] >= arr[i - 1]);
  ok ? cout << "YES" << endl : cout << "NO" << endl;
 }
 
 return 0;
}
