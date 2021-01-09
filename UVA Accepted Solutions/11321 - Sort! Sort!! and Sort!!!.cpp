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


int main()
{
	assem99;

	int n, m;
	while (cin >> n >> m)
	{
		map<int, vector<int>> even, odd;
		int arr[N];
		if (!n && !m)
		{
			cout << "0 0"<<endl;
			break;
		}
		int mn = 1e9;
		f(i, 0, n)
		{
			cin >> arr[i];
			int mod = arr[i] % m;
			mn = min(mn, mod);
			if (arr[i] % 2) odd[mod].push_back(arr[i]);
			else even[mod].push_back(arr[i]);
		}
		cout << n << ' '<<m << endl;
		f(i, mn, m)
		{
			if (!odd[i].empty())
			{
				sort(odd[i].rbegin(), odd[i].rend());
				f(j, 0, sz(odd[i])) cout << odd[i][j] << endl;
			}
			if (!even[i].empty())
			{
				sort(even[i].begin(), even[i].end());
				f(j, 0, sz(even[i])) cout << even[i][j] << endl;
			}
		}
		
		
	}

	return 0;
}