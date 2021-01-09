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

int main()
{
	assem99;
	int n;
	while (cin >> n)
	{
		if (!n) break;
		int score1 = 0, score2 = 0, mid = n / 2;
		point arr[N], p;
		rep(i, 0, n)
		{
			int a, b; cin >> a >> b;
			arr[i] = point(a, b);
			if (i == mid) p = point(a, b);
		}
		rep(i, 0, n)
		{
			if (arr[i].real() == p.real() || arr[i].imag() == p.imag()) continue;
			if (arr[i].real() > p.real() && arr[i].imag() > p.imag()) score1++;
			else if (arr[i].real() < p.real() && arr[i].imag() < p.imag()) score1++;
			else score2++;
		}
		cout << score1 << ' ' << score2 << endl;
	}

	return 0;
}