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
const int MOD = 1e6 + 3, N = 8e3 + 5;
const double pi = acos(-1);
using namespace std;
 
bool valid[N];
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 { 
  memset(valid, false, sizeof(valid));
  int arr[N];
  int n; cin >> n;
  rep(i, 1, n + 1) cin >> arr[i];
  int sum = 0;
  rep(i, 1, n + 1)
  {
   sum = arr[i];
   rep(j, i + 1, n + 1)
   {
    sum += arr[j];
    if (sum <= n) valid[sum] = true;
    else break;
   }
  }
  int ans = 0;
  rep(i, 1, n + 1) if (valid[arr[i]]) ans++; 
  cout << ans << endl;
 }
 
 return 0;
}
