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
 
vector<int> v[N], graph[N];
bool vis[N];
 
void dfs(int node)
{
 if (vis[node]) return;
 
 vis[node] = true;
 f(i, 0, sz(graph[node]))
 {
  int child = graph[node][i];
  dfs(child);
 }
}
 
int main()
{
 assem99;
 
 int cntr = 0;
 int n, m; cin >> n >> m; // n -> people, m -> languages
 f(i, 0, n)
 {
  int a; cin >> a;
  if (a == 0)
  {
   cntr++;
   vis[i + 1] = true;
  }
  f(j, 0, a)
  {
   int u; cin >> u;
   v[u].push_back(i + 1);
  }
 }
 if (cntr == n)
 {
  cout << cntr;
  return 0;
 }
 f(i, 0, m)
 {
  f(j, 0, sz(v[i + 1]) - 1)
  {
   graph[v[i + 1][j]].push_back(v[i + 1][j + 1]);
   graph[v[i + 1][j + 1]].push_back(v[i + 1][j]);
  }
 }
 
 f(i, 0, n)
 {
  if (!vis[i + 1])
  {
   dfs(i + 1);
   cntr++;
  }
 }
 
 cout << cntr - 1;
 
 return 0;
}
