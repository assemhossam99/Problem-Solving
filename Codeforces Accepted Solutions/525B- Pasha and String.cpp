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
 
int arr[N];
char str[N];
 
int main()
{
 assem99;
 
 string s; cin >> s;
 f(i, 1, sz(s) + 1) str[i] = s[i - 1];
 
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  arr[n]++;
  arr[sz(s) - n + 2]--;
 }
 f(i, 1, N) arr[i] = arr[i] + arr[i - 1];
 //f(i, 0, 10) cout << arr[i];
 f(i, 1, (sz(s) / 2) + 1)
 {
  if (arr[i] % 2 == 1)
  {
   char c = str[i];
   str[i] = str[sz(s) - i + 1];
   str[sz(s) - i + 1] = c;
  }
 }
 f(i, 1, sz(s) + 1) cout << str[i];
 
 return 0;
}
