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
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
 
using namespace std;
 
int ans = 1e9, cntr = 0;
 
void solve(int n, int m)
{
 if (n == m)
 {
  ans = min(cntr, ans);
  return;
 }
 if (n > m)
  return;
 n *= 2;
 cntr++;
 solve(n, m);
 cntr--;
 n /= 2;
 
 n *= 3;
 cntr++;
 solve(n, m);
 cntr--;
 n /= 3;
}
 
int main()
{
 assem99;
 
 int n, m;
 cin >> n >> m;
 solve(n, m);
 if (ans == 1e9)
  cout << "-1";
 else
  cout << ans;
 
 return 0;
}
