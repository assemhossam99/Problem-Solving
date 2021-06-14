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
 
char arr[1000][1000];
int n, m, x, y, cntr = 0, steps; // x -> n .. y -> m
 
bool solve(int curX, int curY)
{
 if (curX < 0 || curX >= n || curY < 0 || curY >= m) return false;
 if (arr[curX][curY] == 'X')
 {
  if (curX == x && curY == y) return true;
  else return false;
 }
 
 arr[curX][curY] = 'X';
 if (solve(curX + 1, curY)) return true;
 if (solve(curX - 1, curY)) return true;
 if (solve(curX, curY + 1)) return true;
 if (solve(curX, curY - 1)) return true;
 
 return false;
}
 
int main()
{
 assem99;
 
 cin >> n >> m;
 f(i, 0, n)
 {
  f(j, 0, m)
  {
   cin >> arr[i][j];
  }
 }
 
 int a, b; cin >> a >> b >> x >> y; a--, b--, x--, y--;
 arr[a][b] = '.';
 if (solve(a, b)) cout << "YES";
 else cout << "NO";
 
 return 0;
}
