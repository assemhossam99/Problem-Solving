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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 
 ll x, y, arr[7];
 cin >> x >> y;
 arr[0] = x, arr[1] = y, arr[2] = (y % MOD - x % MOD) % MOD;
 arr[3] = (arr[0] % MOD * -1 % MOD) % MOD, arr[4] = (arr[1] % MOD * -1 % MOD) % MOD, arr[5] = (arr[2] % MOD * -1 % MOD) % MOD;
 
 int n; cin >> n;
 n = n % 6;
 if (n == 0)
  n = 6;
 if (arr[n - 1] < 0)
  cout << (arr[n - 1] % MOD) + MOD;
 else
  cout << arr[n - 1] % MOD;
 
 return 0;
}
