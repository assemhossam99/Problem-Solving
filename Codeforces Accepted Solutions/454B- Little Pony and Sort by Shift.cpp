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
 
int arr[1000][1000];
 
int main()
{
 assem99;
 
 int n, arr[100005], cntr = 0, id = 0;
 cin >> n;
 f(i, 0, n)
  cin >> arr[i];
 f(i, 0, n - 1)
 {
  if (arr[i] > arr[i + 1])
  {
   cntr++;
   id = i;
  }
 }
 if (cntr == 0)
 {
  cout << "0";
  return 0;
 }
 if (arr[n - 1] > arr[0]) cntr++;
 if (cntr > 1) cout << "-1";
 else if (cntr == 1)
 {
  cout << n - id - 1;
 }
 
 
 return 0;
}
