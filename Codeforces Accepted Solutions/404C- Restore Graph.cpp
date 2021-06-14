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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
pair<int, int> arr[N]; // F -> cost, S -> node
vector<int> graph[N];
int freq[N];
 
int main()
{
 assem99;
 
 vector<pair<int, int>> ans;
 int n, k; cin >> n >> k;
 graph->resize(N);
 f(i, 0, n)
 {
  cin >> arr[i].F;
  arr[i].S = i + 1;
 }
 sort(arr, arr + n);
 {
  if (arr[0].F != 0)
  {
   cout << "-1";
   return 0;
  }
 }
 f(i, 0, n)
 {
  graph[arr[i].F + 1].push_back(arr[i].S);
 }
 f(i, 1, n + 1)
 {
  
  int p1 = 0, p2 = 0;
  while (p1 != graph[i].size() && p2 != graph[i + 1].size())
  {
   if (freq[graph[i][p1]] == k)
   {
    p1++;
    continue;
   }
   ans.push_back({ graph[i][p1], graph[i + 1][p2] });
   freq[graph[i][p1]]++;
   freq[graph[i + 1][p2]]++;
   p2++;
  }
 }
 if (sz(ans) != n - 1) cout << "-1";
 else
 {
  cout << sz(ans) << endl;
  f(i, 0, sz(ans)) cout << ans[i].F << ' ' << ans[i].S << endl;
 }
 
 
 return 0;
}
