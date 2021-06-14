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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int ans = 1e9, n, m, leftt[200], rightt[200], hi;
 
int getLeft(int col, string arr)
{
 f(i, 0, m) if (arr[i] == '1') return i;
 return -1;
}
 
int getRight(int col, string arr)
{
 for (int i = m - 1; i >= 0; i--) if (arr[i] == '1') return i;
 return -1;
}
 
void solve(int pos, int curAns, int row)
{
 if (row == hi - 1)
 {
  ans = min(ans, curAns);
  return;
 }
 //cout << (pos + leftt[row] + 1);
 if(rightt[row] != -1)solve(rightt[row], curAns + (pos + rightt[row] + 1), row - 1); // left
 else solve(0, curAns + 1 + pos, row - 1);
 if (leftt[row] != -1)solve(leftt[row], curAns + (((m - pos) - 1) + (m - leftt[row])), row - 1); // right
 else solve(m - 1, curAns + (m - pos), row - 1);
}
 
int main()
{
 assem99;
 
 hi = -1;
 bool zero = true;
 cin >> n >> m; m += 2;
 f(i, 0, n)
 {
  string s; cin >> s;
  leftt[i] = getLeft(i, s);
  rightt[i] = getRight(i, s);
  if (leftt[i] != -1 && zero) hi = i, zero = false;
 }
 
 if (zero) cout << "0";
 else
 {
  solve(max(0, rightt[n - 1]), max(0, rightt[n - 1]), n - 2);
  if(ans >= 0)cout << ans;
  else cout << "0";
 }
 return 0;
}
