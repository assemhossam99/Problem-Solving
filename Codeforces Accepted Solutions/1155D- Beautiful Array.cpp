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
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
 
ll n, k, arr[N];
ll dp[N][10];
 
ll solve(int id, int state)
{
 if(id == n) return 0;
 if (dp[id][state] != -1) return dp[id][state];
 ll ans = -1e12;
 
 // zzzyyxxxyyyzzz  state = 0, 1, 2, 3, 4
 if (state == 0) ans = max(solve(id + 1, state), solve(id, state + 1));
 else if (state == 1) ans = max(solve(id + 1, state) + arr[id], solve(id, state + 1));
 else if (state == 2) ans = max(solve(id + 1, state) + arr[id] * k, solve(id, state + 1));
 else if (state == 3) ans = max(solve(id + 1, state) + arr[id], solve(id, state + 1));
 else ans = solve(id + 1, state);
 
 return dp[id][state] = ans;
}
 
int main()
{
 assem99;
 memset(dp, -1, sizeof(dp));
 cin >> n >> k;
 f(i, 0, n) cin >> arr[i];
 cout << solve(0, 0);
 
 return 0;
}
