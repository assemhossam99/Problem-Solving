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
const int MOD = 1e9 + 7, N = 5e5 + 5;
const double pi = acos(-1);

vector<int> graph[N];
bool vis[N];

int bfs(int node)
{
	int cntr = 1;
	f(i, 0, N) vis[i] = false;
	queue<int> q;
	q.push(node);
	vis[node] = true;
	while (!q.empty())
	{
		node = q.front();
		q.pop();
		for (int child : graph[node])
		{
			if (!vis[child])
			{
				q.push(child);
				vis[child] = true;
				cntr++;
			}
		}
	}
	return cntr;
}

int main()
{
	assem99;
	
	
	while (1)
	{
		int n, m; cin >> n >> m;
		if (n == 0 && m == 0)break;
		f(i, 0, N) graph[i].clear();
		f(i, 0, m)
		{
			int u, v, w; cin >> u >> v >> w;
			graph[u].push_back(v);
			if (w == 2) graph[v].push_back(u);
		}
		bool bazet = false;
		f(i, 1, n + 1)
		{
			if (bfs(i) != n)
			{
				bazet = true;
				break;
			}
		}
		if (!bazet) cout << "1" << endl;
		else cout << "0" << endl;
	}


	return 0;
}