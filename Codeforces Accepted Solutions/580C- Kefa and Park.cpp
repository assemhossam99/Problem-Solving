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
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
vector<int> graph[N];
int arr[N], n, m;
bool vis[N];
 
int bfs(int node)
{
 int cntr = 0;
 bool valid = false;
 queue<ii> q;
 q.push(ii(node, arr[1]));
 vis[node] = true;
 while (!q.empty())
 {
  int curNode = q.front().F, curSeq = q.front().S;
  q.pop();
  valid = false;
  f(i, 0, sz(graph[curNode]))
  {
   if (!vis[graph[curNode][i]]) valid = true;
  }
  if (!valid)
  {
   if (curSeq <= m) cntr++;
  }
  else
  {
   for (int child : graph[curNode])
   {
    if (curSeq == m && arr[child] == 1) continue;
    if (!vis[child])
    {
     vis[child] = true;
     if (arr[child] == 1) q.push(ii(child, curSeq + 1));
     else q.push(ii(child, 0));
    }
   }
  }
 }
 return cntr;
}
 
int main()
{
 assem99;
 
 cin >> n >> m;
 f(i, 1, n + 1) cin >> arr[i];
 f(i, 1, n)
 {
  int u, v;
  cin >> u >> v;
  graph[u].push_back(v);
  graph[v].push_back(u);
 }
 cout << bfs(1);
 
 return 0;
}
