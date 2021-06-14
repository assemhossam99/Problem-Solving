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
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 map<int, string> names;
 map<int, map<string, int>> mp;
 int n; cin >> n;
 int maxPizza = 0, maxTaxi = 0, maxGirls = 0;
 rep(k, 0, n)
 {
  int m; cin >> m;
  string name; cin >> name;
  names[k] = name;
  rep(i, 0, m)
  {
   string s; cin >> s;
   if (s[0] == s[1] and s[1] == s[3] and s[3] == s[4] and s[4] == s[6] and s[6] == s[7])
   {
    mp[k]["taxi"]++;
    maxTaxi = max(maxTaxi, mp[k]["taxi"]);
   }
   else if (s[0] > s[1] and s[1] > s[3] and s[3] > s[4] and s[4] > s[6] and s[6] > s[7])
   {
    mp[k]["pizza"]++;
    maxPizza = max(maxPizza, mp[k]["pizza"]);
   }
   else
   {
    mp[k]["girls"]++;
    maxGirls = max(maxGirls, mp[k]["girls"]);
   }
  }
 }
 bool start = true;
 cout << "If you want to call a taxi, you should call: ";
 rep(i, 0, n)
 {
  if (mp[i]["taxi"] == maxTaxi)
  {
   if (start)
   {
    cout << names[i];
    start = false;
   }
   else cout << ", " << names[i];
  }
 }
 cout << '.' << endl;
 
 start = true;
 cout << "If you want to order a pizza, you should call: ";
 rep(i, 0, n)
 {
  if (mp[i]["pizza"] == maxPizza)
  {
   if (start)
   {
    cout << names[i];
    start = false;
   }
   else cout << ", " << names[i];
  }
 }
 cout << '.' << endl;
 
 start = true;
 cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
 rep(i, 0, n)
 {
  if (mp[i]["girls"] == maxGirls)
  {
   if (start)
   {
    cout << names[i];
    start = false;
   }
   else cout << ", " << names[i];
  }
 }
 cout << '.' << endl;
 
 return 0;
}
