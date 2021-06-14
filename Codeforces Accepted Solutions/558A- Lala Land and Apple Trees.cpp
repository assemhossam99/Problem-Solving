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
 
vector<ii> l, r;
 
int main()
{
 assem99;
 
 int n; cin >> n;
 int sum = 0;
 f(i, 0, n)
 {
  int a, b; cin >> a >> b;
  sum += b;
  if (a < 0) l.push_back(ii(a, b));
  else if (a > 0) r.push_back(ii(a, b));
 }
 sort(l.rbegin(), l.rend());
 sort(r.begin(), r.end());
 if (sz(l) == sz(r)) cout << sum;
 else if (sz(l) > sz(r))
 {
  sum = 0;
  f(i, 0, sz(r)) sum += r[i].S;
  f(i, 0, sz(r) + 1) sum += l[i].S;
  cout << sum;
 }
 else
 {
  sum = 0;
  f(i, 0, sz(l)) sum += l[i].S;
  f(i, 0, sz(l) + 1) sum += r[i].S;
  cout << sum;
 }
 
 
 
 return 0;
}
