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
using namespace std;
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  if ((n / 2) % 2 == 1) cout << "NO" << endl;
  else
  {
   cout << "YES" << endl;
   ll start = 2, sum = 0;;
   f(i, 0, n / 2)
   {
    cout << start << ' ';
    sum += start;
    start += 2;
   }
   start = 1;
   ll sum2 = 0;
 
   f(i, n / 2, n - 1)
   {
    cout << start << ' ';
    sum2 += start;
    start += 2;
   }
   cout << sum - sum2 << endl;
  }
 }
 
 return 0;
}
