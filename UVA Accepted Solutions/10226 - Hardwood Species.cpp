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

	int t; cin >> t;
	string s;
	getline(cin, s); getline(cin, s);
	while (t--)
	{
		
		map<string, int> mp;
		int cntr = 0;
		while (getline(cin, s) && s != "")
		{
			mp[s]++;
			cntr++;
		}
		map<string, int>::iterator it;
		for (it = mp.begin(); it != mp.end(); it++)
		{
			double ans = it->S * 100.0 / cntr;
			cout << it->F << ' ' <<fixed<< setprecision(4) << ans << endl;
		}
		if (t) cout << '\n';
	}

	system("pause");
	return 0;
}