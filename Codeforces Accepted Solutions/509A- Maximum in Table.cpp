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
 
 int n, arr[10][10];
 cin >> n;
 
 f(i, 0, n)
 {
  arr[i][0] = 1;
  arr[0][i] = 1;
 }
 
 f(i, 1, n)
  f(j, 1, n)
   arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
 cout << arr[n - 1][n - 1];
 
 
 return 0;
}
