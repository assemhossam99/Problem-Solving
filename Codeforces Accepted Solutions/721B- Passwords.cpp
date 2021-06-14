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
 
int arr[200];
 
int main()
{
 assem99;
 
 int n, k; cin >> n >> k;
 f(i, 0, n)
 {
  string s; cin >> s;
  arr[sz(s)]++;
 }
 string ans; cin >> ans;
 int ansSize = sz(ans);
 //sort(arr, arr + n);
 int curw = 0;
 f(i, 0, 200)
 {
  if (i > ansSize) break;
  if (arr[i] == 0) continue;
  curw += arr[i];
 }
 if (curw % k == 0) curw += 5 * ((curw / k) - 1);
 else curw += 5 * (curw / k);
 int curb = 0;
 f(i, 0, 200)
 {
  if (i > ansSize) break;
  if (arr[i] == 0) continue;
  if (i == ansSize) curb++;
  else
  {
   curb += arr[i];
  }
 }
   if (curb % k == 0) curb += 5 * ((curb / k) - 1);
   else curb += 5 * (curb / k);
 cout << curb << ' ' << curw;
 
 return 0;
}
