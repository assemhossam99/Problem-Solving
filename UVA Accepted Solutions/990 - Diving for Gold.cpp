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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;

int t, w, n, d[N], v[N], dp[50][3005];
ii build[50][3005];
int solve(int id, int time)
{
	if (id == n) return 0;
	if (~dp[id][time]) return dp[id][time];
	int curTime = 3 * w * d[id], take = 0, leave = 0;
	leave = solve(id + 1, time);
	if (time - curTime >= 0) take = solve(id + 1, time - curTime) + v[id];
	if (take > leave) build[id][time] = { id + 1, time - curTime };
	else build[id][time] = { id + 1, time };
	return dp[id][time] = max(take, leave);
}

int main()
{
	assem99;
	int start = 0;
	while (cin >> t >> w)
	{
		if (start) cout << endl;
		memset(dp, -1, sizeof(dp));
		cin >> n;
		rep(i, 0, n) cin >> d[i] >> v[i];
		cout << solve(0, t) << endl;
		ii cur = ii(0, t);
		vector<int> vec;
		while (cur.F < n)
		{
			if (build[cur.F][cur.S].S < cur.S) vec.push_back(cur.F);
			cur = build[cur.F][cur.S];
		}
		cout << sz(vec) << endl;
		rep(i, 0, sz(vec)) cout << d[vec[i]] << ' ' << v[vec[i]] << endl;
		start++;
	}

	return 0;
}
