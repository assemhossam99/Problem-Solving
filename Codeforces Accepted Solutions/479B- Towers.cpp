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
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
priority_queue<ii, vector<ii>, greater<ii>> small;
priority_queue <ii> great;
vector<ii> vec;
 
int main()
{
 assem99;
 
 int ans = 0;
 int n, k; cin >> n >> k;
 f(i, 0, n)
 {
  int a; cin >> a;
  great.push(ii(a, i));
  small.push(ii(a, i));
 }
 while (k && great.top().F - small.top().F > 1)
 {
  k--;
  int bv = great.top().F, sv = small.top().F, bi = great.top().S, si = small.top().S;
  bv--, sv++, ans++;
  great.pop(); small.pop();
  vec.push_back(ii(bi, si));
  great.push(ii(bv, bi));
  small.push(ii(sv, si));
 }
 //cout << great.top().F << ' ' << small.top().F << endl;
 cout << great.top().F - small.top().F << ' ' << ans << endl;
 f(i, 0, sz(vec))
 {
  cout << vec[i].F + 1 << ' ' << vec[i].S + 1 << endl;
 }
 
 return 0;
}
