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
 
int main()
{
 assem99;
 
 int n, k, arr[N], mn = 1e9, id;
 cin >> n >> k;
 arr[0] = 0;
 f(i, 1, n + 1)
 {
  int x; cin >> x;
  arr[i] = x + arr[i - 1];
 }
 f(i, k, n + 1)
 {
  int sum = arr[i] - arr[i - k];
  if (sum < mn)
  {
   mn = sum;
   id = i - k + 1;
  }
 }
 cout << id;
 return 0;
}
