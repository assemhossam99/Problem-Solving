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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);

int n, m, arr[N], brr[N], start1, start2, end1, end2;
bool used[N];

bool solve(int sizee, int cur)
{
	if (sizee == n)
	{
		if (cur == end1) return true;
		else return false;
	}
	f(i, 0, m)
	{
		if (!used[i])
		{
			if (arr[i] == cur || brr[i] == cur)
			{
				used[i] = true;
				bool flag;
				if (arr[i] == cur) flag = solve (sizee + 1, brr[i]);
				else if (brr[i] == cur) flag = solve(sizee + 1, arr[i]);
				
				if (flag) return true;
				used[i] = false;
			}
		}
	}
	return false;
}

int main()
{
	assem99;

	while (cin >> n)
	{
		if (!n) break;
		cin >> m;
		cin >> start1 >> start2 >> end1 >> end2;
		f(i, 0, m)
		{
			cin >> arr[i] >> brr[i];
			used[i] = false;
		}
		if (solve(0, start2)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}

	system("pause");
	return 0;
}