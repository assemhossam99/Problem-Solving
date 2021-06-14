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
const int MOD = 1e6 + 3, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int arr[N];
 int n, k; cin >> n >> k;
 rep(i, 1, n + 1) cin >> arr[i];
 int ans = 1e9, id = 0;
 rep(i, 1, k + 1) // start
 {
  int sum = 0;
  for (int j = i; j <= n; j += k) sum += arr[j];
  if (sum < ans)
  {
   ans = sum;
   id = i;
  }
 }
 cout << id;
 
 return 0;
}
