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
#include <unordered_map>
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
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int n; cin >> n;
 vector<ii> vec;
 rep(i, 0, n)
 {
  int x; cin >> x;
  vec.push_back(ii(x, i + 1));
 }
 sort(vec.rbegin(), vec.rend());
 vector<int> team1, team2;
 rep(i, 0, sz(vec))
 {
  if (i % 2) team1.push_back(vec[i].S);
  else team2.push_back(vec[i].S);
 }
 cout << sz(team1) << endl;
 for (auto it : team1) cout << it << ' ';
 cout << endl << sz(team2) << endl;
 for (auto it : team2) cout << it << ' ';
 
 return 0;
}
