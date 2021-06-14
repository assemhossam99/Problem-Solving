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
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N];
int dist[N][101];
int n, m, k, s;
vector<int> graph[N];
 
void bfs(int node)
{
 queue<int> q;
 f(i, 0, N) dist[i][node] = N;
 f(i, 0, n)
 {
  if (arr[i] == node)
  {
   dist[i][node] = 0;
   q.push(i);
  }
 }
 while (!q.empty())
 {
  int curNode = q.front();
  q.pop();
  for (auto it : graph[curNode])
  {
   if (dist[it][node] <= dist[curNode][node] + 1) continue;
   dist[it][node] = dist[curNode][node] + 1;
   q.push(it);
  }
 }
}
 
int main()
{
 assem99;
 
 cin >> n >> m >> k >> s;
 f(i, 0, n)
 {
  cin >> arr[i]; arr[i]--;
 }
 f(i, 0, m)
 {
  int u, v; cin >> u >> v; u--, v--;
  graph[u].push_back(v);
  graph[v].push_back(u);
 }
 f(i, 0, k)  bfs(i);
 f(i, 0, n)
 {
  int ans = 0;
  sort(dist[i], dist[i] + k);
  f(j, 0, s) ans += dist[i][j];
  cout << ans << " ";
 }
 
 return 0;
}
