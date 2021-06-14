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
#define ld long double
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 5e5 + 5;
const double pi = acos(-1);
 
double arr[N], brr[N];
vector<double> vec;
 
int main()
{
 assem99;
 
 double n, w; cin >> n >> w;
 double tmp = w;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n) cin >> brr[i];
 f(i, 0, n)
 {
  if (arr[i] <= 1 || brr[i] <= 1)
  {
   cout << "-1";
   return 0;
  }
  if (i == 0) vec.push_back(brr[i]);
  else
  {
   vec.push_back(arr[i]);
   vec.push_back(brr[i]);
  }
 }
 vec.push_back(arr[0]);
 
 f(i, 0, sz(vec))
 {
  w = (vec[i] * w) / (vec[i] - 1);
 }
 cout << setprecision(10) << fixed;
 
 cout << w - tmp;
 
 
 return 0;
}
