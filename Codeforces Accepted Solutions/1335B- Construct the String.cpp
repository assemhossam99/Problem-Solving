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
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int n, a, b; cin >> n >> a >> b;
  char c = 'a';
  int cntr = 1;
  string s = "";
  f(i, 0, a)
  {
   s += c;
   if (cntr < b)
   {
    cntr++;
    c++;
   }
  }
  int p = 0;
  f(i, a, n)
  {
   s += s[p]; p++;
  }
  cout << s << endl;
 }
 
 return 0;
}
