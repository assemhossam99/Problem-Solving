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
 
int arr[N], brr[N];
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  bool no = false;
  int n; cin >> n;
  f(i, 0, n) cin >> arr[i];
  f(i, 0, n) cin >> brr[i];
  if (arr[0] != brr[0]) cout << "NO" << endl;
  else
  {
   bool no = false;
   int neg = 0, pos = 0;
   f(i, 0, n)
   {
    if (arr[i] == 1) pos++;
    if(arr[i] == -1)neg++;
   }
   for (int i = n - 1; i >= 1; i--)
   {
    if (arr[i] == 1) pos--;
    else if (arr[i] == -1) neg--;
    if(arr[i] == brr[i])continue;
    else if (arr[i] < brr[i])
    {
     if (!pos)
     {
      cout << "NO" << endl;
      no = true;
      break;
     }
    }
    else
    {
     if (!neg)
     {
      cout << "NO" << endl;
      no = true;
      break;
     }
    }
   }
   if (!no) cout << "YES" << endl;
  }
 }
 
 return 0;
}
