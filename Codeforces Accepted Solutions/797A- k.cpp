#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdio>
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
#define ii pair<int, int>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
vector<int> vec;
 
int main()
{
 assem99;
 
 int n, k; cin >> n >> k;
 int cntr = 0;
 while (n % 2 == 0)
 {
  if (cntr == k - 1) break;
  cntr++;
  vec.push_back(2);
  n /= 2;
 }
 for (int i = 3; i <= sqrt(n); i += 2)
 {
  while (n % i == 0)
  {
   if (cntr == k - 1) break;
   cntr++;
   vec.push_back(i);
   n /= i;
  }
 }
 if(n != 1)vec.push_back(n);
 if (sz(vec) < k) cout << "-1";
 else f(i, 0, sz(vec)) cout << vec[i] << ' ';
 
 
 return 0;
}
