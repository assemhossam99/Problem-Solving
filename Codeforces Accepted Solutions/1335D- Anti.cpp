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
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
int freq[9];
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  char arr[9][9];
  f(i, 0, 9) f(j, 0, 9) cin >> arr[i][j];
  arr[0][0] = arr[1][0];
  arr[1][4] = arr[2][4];
  arr[2][8] = arr[3][8];
  arr[4][1] = arr[5][1];
  arr[3][6] = arr[4][6];
  arr[5][5] = arr[6][5];
  arr[6][3] = arr[7][3];
  arr[7][7] = arr[8][7];
  arr[8][2] = arr[8][3];
  f(i, 0, 9)
  {
   f(j, 0, 9) cout << arr[i][j];
   cout << endl;
  }
 }
 return 0;
}
