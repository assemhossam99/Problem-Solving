#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;
 
int main()
{ 
 int t, n, arr[100001] , area, cntr;
 cin >> t;
 while (t--)
 {
  cntr = 0;
  cin >> n;
  for (int i = 0; i < n * 4; i++)
   cin >> arr[i];
  sort(arr, arr + (n * 4));
  area = arr[0] * arr[(4 * n) - 1];
  for (int i = 0, j = (n * 4) - 1; i < n * 2, j>= n * 2; i+=2, j-=2)
  {
   if (arr[i] == arr[i + 1] && arr[j] == arr[j - 1] && arr[i] * arr[j] == area)
    cntr++;
  }
  if (cntr == n)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
 return 0;
}
