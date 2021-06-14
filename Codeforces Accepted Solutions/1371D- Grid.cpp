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
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int arr[305][305];
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  memset(arr, 0, sizeof arr);
  int n, k; cin >> n >> k;
  int start = 0;
  cout << ((k % n) ? 2 : 0) << endl;
  while (1)
  {
   int i = 0;
   if (!k) break;
   int j = start;
   rep(_, 0, n)
   {
    if (k)
    {
     arr[i % n][j % n] = 1;
     k--, j++, i++;
    }
   }
   start++;
  }
  rep(i, 0, n)
  {
   rep(j, 0, n)
   {
    cout << arr[i][j];
   }
   cout << endl;
  }
 }
 
 return 0;
}
