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
 
int main()
{
 assem99;
 
 int n, arr[100005], cntr = 1, ans = 0;
 cin >> n;
 
 for (int i = 0; i < n; i++)
  cin >> arr[i];
 
 for (int i = 1; i < n; i++)
 {
  if (arr[i] >= arr[i - 1])
  {
   cntr++;
  }
  else
  {
   ans = max(cntr, ans);
   cntr = 1;
  }
 }
 ans = max(cntr, ans);
 cout << ans;
 
 return 0;
}
