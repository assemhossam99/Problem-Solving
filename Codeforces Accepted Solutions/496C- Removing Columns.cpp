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
 
string arr[N];
int n, m;
 
bool valid(int a)
{
 f(i, 1, n) if (arr[i].substr(0, a) > arr[i + 1].substr(0, a)) return false;
 return true;
}
 
int main()
{
 assem99;
 
 cin >> n >> m;
 f(i, 1, n + 1) cin >> arr[i];
 int ans = 0;
 f(i, 1, m + 1)
 {
  if (!valid(i))
  {
   f(j, 1, n + 1) arr[j][i - 1] = 'a';
   ans++;
  }
 }
 cout << ans;
 return 0;
}
