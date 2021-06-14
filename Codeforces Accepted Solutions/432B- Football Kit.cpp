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
using namespace std;
 
int home[N], away[N], freqH[N], freqA[N], a[N], h[N];
 
int main()
{
 assem99;
 int n; cin >> n;
 rep(i, 0, N) home[i] = n - 1;
 rep(i, 0, N) away[i] = n - 1;
 rep(i, 0, n)
 {
  cin >> h[i] >> a[i];
  freqH[h[i]]++;
  freqA[a[i]]++;
 }
 rep(i, 0, n)
 {
  home[i] += freqH[a[i]];
  away[i] -= freqH[a[i]];
  cout << home[i] << ' ' << away[i] << endl;
 }
 
 return 0;
}
