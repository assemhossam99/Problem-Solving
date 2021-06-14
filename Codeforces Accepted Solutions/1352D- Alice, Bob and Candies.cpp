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
const int MOD = 1e9 + 7, N = 1e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
 assem99;
 int t; cin >> t;
 while (t--)
 {
  int n; cin >> n;
  deque<int> dq;
  int a = 0, b = 0, cnt = 0;
  bool alice = true, bob = false;
  rep(i, 0, n)
  {
   int x; cin >> x;
   dq.push_back(x);
  }
  int lastt = 0;
  int cur = 0;
  while (!dq.empty())
  {
   if (alice)
   {
    cur += dq.front();
    a += dq.front();
    dq.pop_front();
    if (cur > lastt || !sz(dq))
    {
     cnt++;
     lastt = cur;
     cur = 0;
     alice = false;
     bob = true;
    }
   }
   else
   {
    cur += dq.back();
    b += dq.back();
    dq.pop_back();
    if (cur > lastt || !sz(dq))
    {
     cnt++;
     lastt = cur;
     cur = 0;
     alice = true;
     bob = false;
    }
   }
  }
  cout << cnt << ' ' << a << ' ' << b << endl;
 }
 
 return 0;
}
