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
 
int part[1005][1005], arr[1005][1005];
 
int main()
{
 assem99;
 int n; cin >> n;
 int m = n / 2, cur = 0;
 rep(i, 0, m)
 {
  rep(j, 0, m)
  {
   arr[i][j] = 4 * cur;
   arr[i][j + n / 2] = 4 * cur + 1;
   arr[i + n / 2][j] = 4 * cur + 2;
   arr[i + n / 2][j + n / 2] = 4 * cur + 3;
   cur++;
  }
 }
 rep(i, 0, n)
 {
  rep(j, 0, n)
  {
   cout << arr[i][j] << ' ';
  }
  cout << endl;
 }
 
 return 0;
}
