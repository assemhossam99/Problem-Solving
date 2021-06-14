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
#include <unordered_set>
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
const int MOD = 1e9 + 7, N = 2e5 + 5, INF = 1e9;
const double pi = acos(-1);
using namespace std;
 
int arr[N];
 
int main()
{
 assem99;
 int ans = INF;
 int n; cin >> n;
 rep(i, 0, n) cin >> arr[i];
 int t;
 rep(i, 1, 105)
 {
  int cost = 0;
  rep(j, 0, n)
  {
   if (arr[j] > i) cost += abs(arr[j] - (i + 1));
   else if (arr[j] < i) cost += abs(arr[j] - (i - 1));
  }
  if (cost < ans)
  {
   ans = cost;
   t = i;
  }
 }
 cout << t << ' ' << ans;
 
 return 0;
}
