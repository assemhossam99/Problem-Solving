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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int arr[N], pref[N], suff[N];
int main()
{
 assem99;
 int n, m; cin >> n >> m;
 rep(i, 0, n) cin >> arr[i];
 rep(i, 1, n) if (arr[i] <= arr[i - 1]) pref[i] = pref[i - 1] + 1;
 for (int i = n - 2; i >= 0; i--) if (arr[i] <= arr[i + 1]) suff[i] = suff[i + 1] + 1;
 while (m--)
 {
  int a, b; cin >> a >> b; a--, b--;
  if (b - a <= 1 or pref[b] + suff[a] >= b - a) cout << "Yes" << endline;
  else cout << "No" << endline;
 }
 
 return 0;
}
