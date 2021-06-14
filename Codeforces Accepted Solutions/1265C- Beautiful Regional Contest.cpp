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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 4e5 + 5;
const double pi = acos(-1);
 
 
int main()
{
 assem99;
 
 int arr[N];
 int t; cin >> t;
 while (t--)
 {
  map<int, int, greater<int>> mp;
  int g = 0, s = 0, b = 0;
  int n; cin >> n;
  f(i, 0, n)
  {
   cin >> arr[i];
   mp[arr[i]]++;
  }
  if (n == 1)
  {
   cout << "0 0 0"<<endl;
   continue;
  }
  int total = 0;
  //sort(mp.rbegin(), mp.rend());
  map<int, int>::iterator it;
  for (it = mp.begin(); it != mp.end(); it++)
  {
   if (!g && total < n / 2) g = it->S;
   else if (g && s <= g && total < n / 2) s += it->S;
   else if (total + it ->S <= n / 2) b += it->S;
   else break;
   total += it->S;
  }
  if (total <= n / 2 && g < s && g < b) cout << g << ' ' << s << ' ' << b << endl;
  else cout << "0 0 0" << endl;
 }
 
 return 0;
}
