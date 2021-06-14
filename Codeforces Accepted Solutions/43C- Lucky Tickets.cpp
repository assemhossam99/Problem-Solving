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
 
 int n; cin >> n;
 int arr[N];
 f(i, 0, n)
 {
  int a; cin >> a;
  int sum = 0;
  while (a != 0)
  {
   sum += a % 10;
   a /= 10;
  }
  arr[i] = sum;
 }
 int ans = 0;
 f(i, 0, n)
 {
  if (arr[i] == 0) continue;
  f(j, i + 1, n)
  {
   if (arr[j] == 0) continue;
   if ((arr[i] + arr[j]) % 3 == 0 && arr[i] != 0 && arr[j] != 0)
   {
    ans++;
    arr[i] = arr[j] = 0;
   }
  }
 }
 cout << ans;
 
 return 0;
}
