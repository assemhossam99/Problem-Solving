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
 
int arr[N];
 
int main()
{
 assem99;
 int n, m; cin >> n >> m;
 while (m--)
 {
  int a, b, c; cin >> a >> b >> c;
  vector<int> vec;
  if (arr[a] != 1 and arr[b] != 1 and arr[c] != 1) vec.push_back(1);
  if (arr[a] != 2 and arr[b] != 2 and arr[c] != 2) vec.push_back(2);
  if (arr[a] != 3 and arr[b] != 3 and arr[c] != 3) vec.push_back(3);
  if (!arr[a])
  {
   arr[a] = vec.back();
   vec.pop_back();
  }
  if (!arr[b])
  {
   arr[b] = vec.back();
   vec.pop_back();
  }
  if (!arr[c])
  {
   arr[c] = vec.back();
   vec.pop_back();
  }
 }
 rep(i, 1, n + 1) cout << arr[i] << ' ';
 
 return 0;
}
