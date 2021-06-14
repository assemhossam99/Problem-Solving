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
#define pll pair<ll, ll>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
 
int main()
{
 assem99;
 vector<int> pos, neg, z;
 int n; cin >> n;
 f(i, 0, n)
 {
  int a; cin >> a;
  if (a > 0 && !sz(pos)) pos.push_back(a);
  else if (a < 0) neg.push_back(a);
  else z.push_back(a);
 }
 int used = 0;
 cout << "1 " << neg[0] << endl; used++;
 if (sz(pos)) {
  cout << "1 " << pos[0] << endl; used++;
 }
 else {
  cout << "2 " << neg[1] << ' ' << neg[2] << endl; used += 2;
 }
 cout << n - used << ' ';
 f(i, 0, sz(z)) cout << z[i] << ' ';
 if (sz(pos)) f(i, 1, sz(neg)) cout << neg[i]<<' ';
 else f(i, 3, sz(neg)) cout << neg[i] << ' ';
 
 return 0;
}
