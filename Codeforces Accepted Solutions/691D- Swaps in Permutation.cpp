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
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
 
int arr[N], fans[N];
vector<int> graph[N], pos, value;
bool vis[N];
 
void dfs(int node)
{
 if (vis[node]) return;
 vis[node] = true;
 pos.push_back(node);
 value.push_back(arr[node]);
 
 for (auto it : graph[node]) if (!vis[it]) dfs(it);
}
 
int main()
{
 assem99;
 
 int n, m; cin >> n >> m;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, m)
 {
  int u, v; cin >> u >> v; u--, v--;
  graph[u].push_back(v);
  graph[v].push_back(u);
 }
 f(i, 0, n)
 {
  if (!vis[i])
  {
   pos.clear(), value.clear();
   dfs(i);
   sort(value.rbegin(), value.rend()); sort(pos.begin(), pos.end());
   f(j, 0, sz(value)) fans[pos[j]] = value[j];
  }
 }
 f(i, 0, n) cout << fans[i] << ' ';
 
 return 0;
}
