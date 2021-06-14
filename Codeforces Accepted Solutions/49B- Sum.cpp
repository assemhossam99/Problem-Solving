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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 
 vector<int> vec;
 int n, m; cin >> n >> m; int a = n, b = m;
 int mx = -1;
 while (a != 0)
 {
  mx = max(mx, a % 10);
  a /= 10;
 }
 while (b != 0)
 {
  mx = max(mx, b % 10);
  b /= 10;
 }
 mx++;
 int ans = 0, sum = 0;
 while (n != 0 || m != 0 || sum != 0)
 {
  sum += (m % 10) + (n % 10); sum /= mx;
  n /= 10, m /= 10;
  ans++;
 }
 cout << ans;
 
 return 0;
}
