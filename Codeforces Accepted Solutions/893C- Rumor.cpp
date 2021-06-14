#include <iostream>
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
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
 
using namespace std;
 
int n, m, p[100005], a, b;
vector<int> v[100005];
bool vis[100005];
int mn = INT_MAX;
void dfs(int u)
{
 vis[u] = true;
 mn = min(mn, p[u]);
 for (int i : v[u])
 {
  if (!vis[i])
   dfs(i);
 }
}
 
int main()
{
 assem99;
 
 cin >> n >> m;
 ll sum = 0;
 
 for (int i = 0; i < n; i++)
  cin >> p[i];
 
 for (int i = 0; i < m; i++)
 {
  cin >> a >> b;
  a--;
  b--;
  v[a].push_back(b);
  v[b].push_back(a);
 }
 for (int i = 0; i < n; i++)
 {
  if (!vis[i])
  {
   mn = INT_MAX;
   dfs(i);
   sum += mn;
  }
 }
 
 
 
 cout << sum;
 
 return 0;
 
}
