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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
queue<pair<ll, ll>> q;
map<ll, bool>vis;
 
int main()
{
 assem99;
 
 ll n, m;
 cin >> n >> m;
 q.push({n, 0});
 vis[n] = true;
 while (1)
 {
  if (!vis[q.front().F * 2] && q.front().F <= m)
  {
   q.push({ q.front().F * 2, q.front().second + 1});
   vis[q.front().F * 2] = true;
  }
  if (!vis[q.front().F - 1] && q.front().first > 0)
  {
   q.push({ q.front().F - 1, q.front().second + 1 });
   vis[q.front().F - 1] = true;
  }
  if (q.front().F == m)
  {
   cout << q.front().S;
   return 0;
  }
  q.pop();
 }
 
 return 0;
}
