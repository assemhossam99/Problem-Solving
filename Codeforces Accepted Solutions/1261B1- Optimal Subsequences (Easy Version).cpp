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
 
 vii vec;
 int n; cin >> n;
 f(i, 0, n)
 {
  int a; cin >> a;
  vec.push_back(ii(a, i * -1));
 }
 sort(vec.rbegin(), vec.rend());
 int t; cin >> t;
 while (t--)
 {
  vii ans;
  int k, pos; cin >> k >> pos;
  for (int i = 0, j = 0; i < sz(vec), j < k; i++, j++)
  {
   ans.push_back(ii(vec[i].S * -1, vec[i].F));
  }
  sort(ans.begin(), ans.end());
  cout << ans[pos - 1].S << endl;
 }
 
 return 0;
}
