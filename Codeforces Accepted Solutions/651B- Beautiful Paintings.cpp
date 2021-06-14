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
 
int freq[N];
 
int main()
{
 assem99;
 int n; cin >> n;
 int arr[N], mn = 1e9, cnt = 0;
 rep(i, 0, n)
 {
  cin >> arr[i];
  cnt += (freq[arr[i]] == 0);
  freq[arr[i]]++;
 }
 int ans = 0;
 rep(i, 0, n) mn = min(freq[arr[i]], mn);
 sort(arr, arr + n);
 while (1)
 {
  bool still = false;
  rep(i, 1, 1005) still |= freq[i];
  if (!still) break;
  ans += mn * (cnt - 1);
  rep(i, 0, 1005)
  {
   if (freq[i])
   {
    freq[i] -= mn;
    if (!freq[i]) cnt--;
   }
  }
  mn = 1e9;
  rep(i, 0, 1005) if (freq[i]) mn = min(mn, freq[i]);
 }
 cout << ans;
 
 return 0;
}
