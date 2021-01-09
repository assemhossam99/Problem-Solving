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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);

vector<pair<int, int>> graph[N];
int cost[N];

int dijkstra(int start, int dest)
{
	f(i, 0, N) cost[i] = N;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, start });
	cost[start] = 0;
	while (!pq.empty())
	{
		int curNode = pq.top().S, curCost = pq.top().F;
		pq.pop();
		if (curCost > cost[curNode]) continue;
		f(i, 0, sz(graph[curNode]))
		{
			int child = graph[curNode][i].F, newCost = curCost + graph[curNode][i].S;
			if (newCost < cost[child])
			{
				pq.push({ newCost, child });
				cost[child] = newCost;
			}
		}
	}
	return cost[dest];
}

int main()
{
	assem99;


	int t; cin >> t;
	int cntr = 1;
	while (t--)
	{
		f(i, 0, N) graph[i].clear();
		int n, m, start, dest; cin >> n >> m >> start >> dest;
		f(i, 0, m)
		{
			int u, v, w; cin >> u >> v >> w;
			graph[u].push_back({ v, w });
			graph[v].push_back({ u, w });
		}
		if (dijkstra(start, dest) != N) cout << "Case #" << cntr++ << ": " << dijkstra(start, dest) << endl;
		else cout << "Case #" << cntr++ << ": " << "unreachable" << endl;

	}

	return 0;
}