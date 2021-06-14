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
#define assem99 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
 
using namespace std;
 
bool IsPrime(ll n)
{
 for (int i = 2; i < n; i++)
 {
  if (n % i == 0)
   return false;
 }
 return true;
}
 
int main()
{
 assem99;
 
 int n, a, b;
 cin >> n;
 for (int i = 4; i < 1e9; i++)
 {
  b = i;
  a = i + n;
  if (!IsPrime(a) && !IsPrime(b))
   break;
 }
 cout << a << ' ' << b;
 return 0;
}
