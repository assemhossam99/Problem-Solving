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
 
int tmp;
int solve(int n, int ans)
{
 if (n < 10)
  return ans + n;
 
 tmp = (n - (n % 10));
 ans += tmp;
 n -= tmp;
 n += tmp / 10;
 solve(n, ans);
}
 
int main()
{
 assem99;
 
 int t, n, ans;
 cin >> t;
 while (t--)
 {
  cin >> n;
  cout<<solve(n, 0)<<endl;
 }
 
 return 0;
}
