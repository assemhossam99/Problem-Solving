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

int ans[6], arr[N], n;

void solve(int cntr, int i)
{
	if (cntr == 6)
	{
		cout << ans[0];
		f(i, 1, 6) cout << ' ' << ans[i];
		cout << endl;
		return;
	}
	for (; i < n; i++)
	{
		ans[cntr] = arr[i];
		solve(cntr + 1, i + 1);
	}
}

int main()
{
	assem99;

	bool fst = true;
	while (cin >> n)
	{
		if (!n) break;
		if (!fst) cout << endl;
		f(i, 0, n) cin >> arr[i];
		solve(0, 0);
		fst = false;
	}
	

	system("pause");
	return 0;
}