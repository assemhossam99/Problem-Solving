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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
vector<pair<int, int>> vec;
 
bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
 if (a.F != b.F) return a < b;
 return(a.S > b.S);
}
 
ll arr[N], brr[N], crr[N];
 
int main()
{
 assem99;
 
 ll n; cin >> n;
 ll ans = 0;
 f(i, 0, n)
 {
  cin >> arr[i] >> brr[i];
  crr[i] = arr[i] - brr[i];
  ans += (n * brr[i]) - arr[i];
 }
 sort(crr, crr + n, greater<ll>());
 f(i, 0, n)
 {
  ans += crr[i] * (i + 1);
 }
 cout << ans;
 
 return 0;
}
