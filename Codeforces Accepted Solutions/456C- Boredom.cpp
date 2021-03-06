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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
 
ll dp[N];
ll freq[N], mx = -1;
ll solve(int id)
{
 if (id > mx) return 0;
 if(dp[id] != -1) return dp[id];
 ll ans = max(freq[id] * id + solve(id + 2), solve(id + 1));
 
 return dp[id] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 int n; cin >> n;
 f(i, 0, n)
 {
  ll a; cin >> a;
  freq[a]++;
  mx = max(mx, a);
 }
 cout << solve(1);
 
 return 0;
}
