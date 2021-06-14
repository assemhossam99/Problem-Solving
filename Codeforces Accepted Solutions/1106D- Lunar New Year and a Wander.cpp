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
 
vector<int> graph[N], ans;
bool vis[N];
 
void bfs(int node)
{
 priority_queue<int, vector<int>, greater<int>> pq;
 pq.push(1); vis[1] = true;
 while (!pq.empty())
 {
  int curNode = pq.top();
  ans.push_back(curNode);
  pq.pop();
  f(i, 0, sz(graph[curNode]))
  {
   if (!vis[graph[curNode][i]])
   {
    vis[graph[curNode][i]] = true;
    pq.push(graph[curNode][i]);
   }
  }
 }
}
 
int main()
{
 assem99;
 
 int n, m; cin >> n >> m;
 f(i, 0, m)
 {
  int u, v; cin >> u >> v;
  graph[u].push_back(v);
  graph[v].push_back(u);
 }
 
 bfs(1);
 f(i, 0, sz(ans)) cout << ans[i] << ' ';
 
 return 0;
}
