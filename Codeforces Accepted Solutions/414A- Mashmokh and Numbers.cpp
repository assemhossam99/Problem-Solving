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
 
int main()
{
 assem99;
 int n, k; cin >> n >> k;
 if (n == 1 and !k) return cout << 1, 0;
 int arr[N], cur = 1;
 int cnt = n - n % 2;
 cnt /= 2;
 k -= cnt - 1;
 if (k <= 0 or n == 1) return cout << "-1", 0;
 arr[0] = k, arr[1] = k * 2;
 rep(i, 2, n)
 {
  if (i % 2 == 0)
  {
   if ((cur == arr[0] or cur == arr[1]) or (cur + 1 == arr[0] or cur + 1 == arr[1])) cur = arr[1] + 1;
  }
  arr[i] = cur++;
 }
 rep(i, 0, n) cout << arr[i] << ' ';
 
 return 0;
}
