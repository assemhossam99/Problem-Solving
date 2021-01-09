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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);

bool board[10][10];

int tmp, arr[10];
vector < pair<int, int>> v;
vector<vector<pair<int, int>>> ans;

bool av(int x, int y)
{
	int a = x, b = y;
	for (int i = x; i >= 0; i--)
	{
		if (board[y][i] == true) return false;
	}
	while (a >= 0 && b >= 0)
	{
		if (board[b][a] == true) return false;
		a--, b--;
	}
	while (x >= 0 && y < 8)
	{
		if (board[y][x] == true) return false;
		x--, y++;
	}
	return true;
}

void solve(int col)
{
	if(col == 8)
	{
		f(i, 0, 8)
		{
			f(j, 0, 8)
			{
				if (board[i][j] == true) v.push_back({ j, i + 1 });
			}
		}
		sort(v.begin(), v.end());
		ans.push_back(v);
		v.clear();
		return;
	}

	f(i, 0, 8) //cells of column
	{
		if (!av(col, i)) continue;
		tmp = i;
		board[i][col] = true;
		solve(col + 1);
		board[i][col] = false;
	}

}

int main()
{
	assem99;

	int cntr = 0;
	while (cin >> arr[0])
	{
		cntr++;
		int sum = 0, mn = 1e9;
		ans.clear();
		f(i, 1, 8) cin >> arr[i];
		solve(0);
		f(i, 0, sz(ans))
		{
			sum = 0;
			f(j, 0, sz(ans[i]))
			{
				if (arr[j] != ans[i][j].S) sum++;
			}
			mn = min(mn, sum);
		}
		cout << "Case " << cntr << ": " << mn << endl;
	}


	system("pause");
	return 0;
}