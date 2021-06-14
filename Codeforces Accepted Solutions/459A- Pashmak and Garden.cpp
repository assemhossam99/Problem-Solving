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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
 int deltaX = x1 - x2, deltaY = y1 - y2;
 if (deltaX and deltaY and abs(deltaX) != abs(deltaY)) cout << "-1";
 else if (deltaX and deltaY) cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
 else if (deltaX) cout << x1 << ' ' << y1 + abs(deltaX) << ' ' << x2 << ' ' << y2 + abs(deltaX);
 else cout << x1 + abs(deltaY) <<' '<< y1 << ' ' << x2 + abs(deltaY) << ' ' << y2;
 
 return 0;
}
