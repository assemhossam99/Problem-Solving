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
 
int main()
{
 assem99;
 
 int n, k; cin >> n >> k;
 if (n % 2 == 0 && k > (n * n) / 2) cout << "NO";
 else if (n % 2 == 1 && k > ((n * n) / 2) + 1) cout << "NO";
 else
 {
  int cntr = 0;
  cout << "YES" << endl;
  f(i, 0, n)
  {
   f(j, 0, n)
   {
    if (i % 2 == 0)
    {
     if (j % 2 == 0 && cntr < k)
     {
      cntr++;
      cout << "L";
     }
     else cout << "S";
    }
    else
    {
     if (j % 2 == 1 && cntr < k)
     {
      cout << "L";
      cntr++;
     }
     else cout << "S";
    }
   }
   cout << endl;
  }
 }
 
 return 0;
}
