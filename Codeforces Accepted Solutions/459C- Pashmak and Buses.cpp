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
 
ll arr[N];
 
int main()
{
 assem99;
 ll n, k, d; cin >> n >> k >> d;
 ll ans = 1;
 for (int i = 1; i <= d and ans < n; i++) ans *= k;
 if (ans < n) cout << "-1";
 else
 {
  rep(i, 1, n + 1) arr[i] = i;
  rep(i, 1, d + 1)
  {
   rep(j, 1, n + 1)
   {
    cout << arr[j] % k + 1;
    arr[j] /= k;
    (j == n)? cout << endl : cout << ' ';
   }
  }
 }
 
 return 0;
}
