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
const int MOD = 1e9 + 7, N = 1e6 + 5;
using namespace std;
 
int freq[N];
 
int main()
{
 assem99;
 int arr[N], brr[N];
 int n, m; cin >> n >> m;
 rep(i, 0, n)
 {
  cin >> arr[i];
  freq[arr[i]]++;
 }
 rep(i, 0, m) cin >> brr[i];
 int ans = 0, cur = m - 1;
 for (int i = n - 1; i >= 0; i--)
 {
  if (cur == -1)
  {
   ans += i + 1;
   break;
  }
  if (arr[i] > brr[cur])ans++;
  else cur--;
 }
 cout << ans;
 
 return 0;
}
