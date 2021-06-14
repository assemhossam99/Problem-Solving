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
#define pll pair<ll, ll>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
 
vector<pair<ii, ii>> vec;
vector<int> ans;
int n, dp[105][N], t[N], d[N], p[N];
ii idx[N][N];
 
int solve(int id, int time)
{
 if (id == n) return 0;
 if (dp[vec[id].S.S][time] != -1) return dp[vec[id].S.S][time];
 
 int take = 0, leave = 0;
 
 if (d[vec[id].S.S] > time + t[vec[id].S.S]) take = solve(id + 1, time + t[vec[id].S.S]) + p[vec[id].S.S];
 leave = solve(id + 1, time);
 
 if (take > leave) idx[id][time] = { id + 1, time + t[vec[id].S.S] };
 else idx[id][time] = { id + 1, time };
 
 return dp[vec[id].S.S][time] = max(take, leave);
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n;
 f(i, 0, n)
 {
  cin >> t[i] >> d[i] >> p[i];
  vec.push_back({ ii(d[i], t[i]), ii(p[i], i) });
 }
 sort(vec.begin(), vec.end());
 cout << solve(0, 0) << endl;
 ii cur = ii(0, 0); //id, time
 while (cur.F < n)
 {
  if (idx[cur.F][cur.S].S > cur.S) ans.push_back(vec[cur.F].S.S);
  cur = idx[cur.F][cur.S];
 }
 cout << sz(ans) << endl;
 f(i, 0, sz(ans)) cout << ans[i] + 1 << ' ';
 
 return 0;
}
