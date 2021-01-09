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

ll fact[N], inv[N];

ll fp(ll b, ll p)
{
	if (p == 0)
		return 1;
	ll ans = fp(b, p / 2);
	ans = (ans * ans) % MOD;

	if (p % 2 != 0)
		ans = (ans *(b % MOD)) % MOD;
	return ans;
}

void calc(ll n)
{
	fact[0] = inv[0] = 1;
	for (ll i = 1; i <= n; i++)
	{
		fact[i] = (i * fact[i - 1]) % MOD;
		inv[i] = fp(fact[i], MOD - 2);
	}
}

ll ncr(ll n, ll r)
{
	return ((fact[n] * inv[r]) % MOD * inv[n - r]) % MOD;
}

vector<int> graph[N];
bool vis[N];
int freq[N];
int mx, ans;

void bfs(int node)
{
	mx = 0, ans = 0;
	queue<pair<int, int>> q;
	q.push({node, 0});
	vis[node] = true;
	int level = 0;
	while (!q.empty())
	{
		node = q.front().F;
		level = q.front().S;
		q.pop();
		int cntr = 0;
		for (int child : graph[node])
		{
			if (!vis[child])
			{
				freq[level] ++;
				q.push({ child, level + 1 });
				vis[child] = true;
			}
		}
		if (freq[level] > mx)
		{
			mx = freq[level];
			ans = level;
		}
	}
}

int main()
{
	assem99;


	int n; cin >> n;
	f(i, 0, n)
	{
		int m; cin >> m;
		f(j, 0, m)
		{
			int u; cin >> u;
			graph[i].push_back(u);
		}
	}
	int t; cin >> t;
	while (t--)
	{
		f(i, 0, N) freq[i] = 0;
		f(i, 0, N) vis[i] = false;
		int start; cin >> start;
		bfs(start);
		sort(freq, freq + N, greater<int>());
		if (freq[0] == 0) cout << '0' << endl;
		else cout << freq[0] <<' '<<ans + 1<< endl;
	}

	return 0;
}