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
const int MOD = 1e9 + 7, N = 3e3 + 5;
const double pi = acos(-1);
using namespace std;

bool prime[N];
vector<int> primes;
void sieve()
{
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= N; p++)
	{
		if (prime[p])
		{
			for (int i = p * p; i <= N - 1; i += p) prime[i] = false;
		}
	}
}

int n, k, dp[500][20][2000]; // id, cnt, sum;
int solve(int id, int left, int sum)
{
	if (!left) return (sum == n);
	if (id >= sz(primes)) return 0;
	if (dp[id][left][sum] != -1) return dp[id][left][sum];
	int ans = solve(id + 1, left, sum);
	if (sum + primes[id] <= n) ans += solve(id + 1, left - 1, sum + primes[id]);
	return dp[id][left][sum] = ans;
}

int main()
{
	assem99;
	sieve();
	rep(i, 2, N) if (prime[i]) primes.push_back(i);
	while (cin >> n >> k)
	{
		if (!n && !k) break;
		memset(dp, -1, sizeof(dp));
		cout << solve(0, k, 0) << endl;
	}

	return 0;
}