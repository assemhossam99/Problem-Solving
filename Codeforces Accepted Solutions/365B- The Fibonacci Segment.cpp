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
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 f(i, 0, n) cin >> arr[i];
 int ans = 2;
 int fans = 2;
 f(i, 2, n)
 {
  if (arr[i] == arr[i - 1] + arr[i - 2])ans++;
  else
  {
   fans = max(fans, ans);
   ans = 2;
  }
 }
 fans = max(fans, ans);
 if (n < 2) cout << n;
 else cout << fans;
 
 return 0;
}
