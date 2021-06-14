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
#define ii pair<int, int>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll arr[30][30], freq[30];
 
int main()
{
 assem99;
 
 string s; cin >> s;
 f(i, 0, sz(s))
 {
  f(j, 0, 26) arr[j][s[i] - 'a'] += freq[j];
  freq[s[i] - 'a']++;
 }
 ll mx = 0;
 f(i, 0, 26) mx = max(mx, freq[i]);
 f(i, 0, 26)
 {
  f(j, 0, 26)
  {
   mx = max(mx, arr[i][j]);
  }
 }
 cout << mx;
 
 return 0;
}
