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
 
int n, arr[N], ans[N];
vector<int> graph[N];
bool vis[N];
 
void evenBfs()
{
 queue<pair<int, int>> q;
 f(i, 0, n)
 {
  if (arr[i] % 2 == 0)
  {
   q.push({ i, 0 });
   vis[i] = true;
  }
 }
 while (!q.empty())
 {
  int curNode = q.front().F, level = q.front().S;
  q.pop();
  if (arr[curNode] % 2 == 1 && ans[curNode] == 0) ans[curNode] = level;
  for (int child : graph[curNode])
  {
   if (!vis[child])
   {
    q.push({ child, level + 1 });
    vis[child] = true;
   }
  }
 }
}
 
void oddBfs()
{
 f(i, 0, N) vis[i] = false;
 queue<pair<int, int>> q;
 f(i, 0, n)
 {
  if (arr[i] % 2 == 1)
  {
   q.push({ i, 0 });
   vis[i] = true;
  }
 }
 while (!q.empty())
 {
  int curNode = q.front().F, level = q.front().S;
  q.pop();
  if (arr[curNode] % 2 == 0 && ans[curNode] == 0) ans[curNode] = level;
  for (int child : graph[curNode])
  {
   if (!vis[child])
   {
    q.push({ child, level + 1 });
    vis[child] = true;
   }
  }
 }
}
 
int main()
{
 assem99;
 
 cin >> n;
 f(i, 0, n)
 {
  cin >> arr[i];
  if (i + arr[i] < n) graph[i + arr[i]].push_back(i);
  if (i - arr[i] >= 0) graph[i - arr[i]].push_back(i);
 }
 evenBfs(); oddBfs();
 f(i, 0, n)
 {
  if(ans[i] != 0) cout << ans[i] << ' ';
  else cout << "-1 ";
 }
 
 return 0;
}
