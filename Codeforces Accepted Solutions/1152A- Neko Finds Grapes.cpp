#include <iostream>
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
 
 int n, m, arr[100005], brr[100005], e1 = 0, o1 = 0, e2 = 0, o2 = 0;
 cin >> n >> m;
 f(i, 0, n)
 {
  cin >> arr[i];
  if (arr[i] % 2)
   o1++;
  else
   e1++;
 }
 f(i, 0, m)
 {
  cin >> brr[i];
  if (brr[i] % 2)
   o2++;
  else
   e2++;
 }
 int ans = 0;
 ans += min(o1, e2);
 ans += min(e1, o2);
 cout << ans;
 
 return 0;
}
