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
#define ll long long
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
int main()
{
 assem99;
 
 int n, t, arr[3];
 cin >> t;
 while (t--)
 {
  for (int i = 0; i < 3; i++)
   cin >> arr[i];
  cin >> n;
  sort(arr, arr + 3);
 
  if (n >= arr[2] - arr[0])
  {
   n -= arr[2] - arr[0];
   arr[0] = arr[2];
  }
 
  if (n >= arr[2] - arr[1])
  {
   n -= arr[2] - arr[1];
   arr[1] = arr[2];
  }
  
  if (arr[0] == arr[1] && arr[2] == arr[1] && n % 3 == 0)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 
 }
 
 return 0;
}
