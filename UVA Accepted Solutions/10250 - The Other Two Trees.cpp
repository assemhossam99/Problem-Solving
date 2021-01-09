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
//int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
//int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;

double dot(point a, point b)
{
	return (conj(a) * b).real();
}

double cross(point a, point b)
{
	return (conj(a) * b).imag();
}

double angle(point a, point b)
{
	double dt = dot(a, b);
	dt /= abs(a);
	dt /= abs(b);
	return acos(dt) * 180.0 / pi;
}

point rotate(point a)
{
	return a * polar(1.0, pi / 2);
}

int main()
{
	assem99;
	ld x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		point mid((x1 + x2) / 2, (y1 + y2) / 2);
		point diff(mid.real() - x1, mid.imag() - y1);
		point a(mid.real() - diff.imag(), mid.imag() + diff.real());
		point b(mid.real() + diff.imag(), mid.imag() - diff.real());
		cout << fixed << setprecision(10) << a.real() << ' ' << a.imag() << ' ' << b.real() << ' ' << b.imag() << endl;
	}

	return 0;
}