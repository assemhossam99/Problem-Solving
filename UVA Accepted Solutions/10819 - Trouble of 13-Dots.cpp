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
#include <complex>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
using namespace std;

int total, n, price[150], val[150], dp[150][15005];

int solve(int id, int money)
{
	if (id == n) return (money <= total || (money > 2000 && money <= total + 200)) ? 0 : -1e9;
	if (dp[id][money] != -1) return dp[id][money];
	int ans = solve(id + 1, money);
	if (money + price[id] <= total + 200) ans = max(ans, solve(id + 1, money + price[id]) + val[id]);
	return dp[id][money] = ans;
}

int main()
{
	assem99;
	while (cin >> total >> n)
	{
		memset(dp, -1, sizeof(dp));
		rep(i, 0, n) cin >> price[i] >> val[i];
		cout << solve(0, 0) << endl;
	}

	
	return 0;
}