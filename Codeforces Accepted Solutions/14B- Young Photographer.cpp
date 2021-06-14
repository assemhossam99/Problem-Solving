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
 
int arr[1000005];
 
int main()
{
 assem99;
 
 int n, x, l = 0, r = 1e9;
 cin >> n >> x;
 f(i, 0, n)
 {
  int a, b;
  cin >> a >> b;
  if (a > b)swap(a, b);
  l = max(l, a);
  r = min(r, b);
 }
 
 if (l > r) cout << "-1";
 else if (x >= l && x <= r)cout << '0';
 else cout << min(abs(l - x), abs(r - x));
  
 return 0;
}
