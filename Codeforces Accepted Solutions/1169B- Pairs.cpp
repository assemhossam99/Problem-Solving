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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
 
vector<pair<int, int>> vec;
int arr[N];
 
int main()
{
 assem99;
 
 int n, q; cin >> n >> q;
 f(i, 0, q)
 {
  int u, v; cin >> u >> v;
  vec.push_back({ u, v });
 }
 int a = vec[0].F, b = vec[0].S, cntr = 0;
 f(i, 1, q)
 {
  if (vec[i].F == a || vec[i].S == a) cntr++;
  else arr[vec[i].F]++, arr[vec[i].S]++;
 }
 sort(arr, arr + n, greater<int>());
 //cout << cntr + arr[0];
 if (cntr + arr[0] >= q - 1) cout << "YES";
 else
 {
  cntr = 0;
  f(i, 0, N) arr[i] = 0;
  f(i, 1, q)
  {
   if (vec[i].F == b || vec[i].S == b) cntr++;
   else arr[vec[i].F]++, arr[vec[i].S]++;
  }
  sort(arr, arr + n, greater<int>());
  if (cntr + arr[0] >= q - 1) cout << "YES";
  else cout << "NO";
 }
 
 return 0;
}
