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

int cost[N], arr[N];
vector<pair<int, int>> graph[N];
vector<int> lifts;

int dijkstra(int start, int dest)
{
	f(i, 0, N) cost[i] = N;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	cost[start] = 0;
	pq.push({ 0, start });
	while (!pq.empty())
	{
		int curCost = pq.top().F, curNode = pq.top().S;
		pq.pop();
		
		if (cost[curNode] == curCost)
		{
			for (auto it : graph[curNode])
			{
				int child = it.F, newCost = it.S;
				if (cost[child] == N || cost[child] > cost[curNode] + newCost + 60)
				{
					cost[child] = cost[curNode] + newCost + 60;
					pq.push({ cost[child],  child });
				}
			}
		}
	}
	return cost[dest];
}

int main()
{
	assem99;

	int n, dest;
	while (cin >> n >> dest)
	{
		lifts.clear();
		f(i, 0, N) graph[i].clear();
		vector<int> vec;
		f(i, 0, n) cin >> arr[i];
		cin.ignore();
		f(i, 0, n)
		{
			string s;
			getline(cin, s);
			s += ' ';
			int start = 0;
			f(j, 0, sz(s))
			{
				if (s[j] == ' ')
				{
					vec.push_back(stoi(s.substr(start, j - start)));
					if ((stoi(s.substr(start, j - start)) == 0)) lifts.push_back(i);
					start = j + 1;
				}
			}
			f(j, 0, sz(vec))
			{
				f(k, j + 1, sz(vec))
				{
					graph[vec[j]].push_back({ vec[k], abs(vec[k] - vec[j]) * arr[i] });
					graph[vec[k]].push_back({ vec[j], abs(vec[k] - vec[j]) * arr[i] });
				}
			}
			vec.clear();
		}
		int ans = dijkstra(0, dest);
		if (ans == N) cout << "IMPOSSIBLE" << endl;
		else
		{
			if (dest != 0) ans -= 60;
			cout << ans << endl;
		}
	}

	system("pause");
	return 0;
}