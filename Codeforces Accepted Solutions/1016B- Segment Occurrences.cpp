#include <iostream>
#include <stdio.h>
#include <string>
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
using namespace std;
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N];
 
int main()
{
 assem99;
 
 int n, m, q; cin >> n >> m >> q;
 string s; cin >> s;
 string t; cin >> t;
 f(i, 0, sz(s) - sz(t) + 1)
 {
  if (s.substr(i, sz(t)) == t) arr[i + 1] = 1;
 }
 f(i, 1, N) arr[i] = arr[i] + arr[i - 1];
 
 while (q--)
 {
  int l, r; cin >> l >> r; r -= m; r++;
  if (r < 0) cout << "0"<<endl;
  else cout << max(0, arr[r] - arr[l - 1]) << endl;
 }
 
 return 0;
}
