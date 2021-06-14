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
 int n, m, k; cin >> n >> m >> k;
 int cnt = 0, idi, idj;
 vector<int> vec;
 rep(i, 0, n)
 {
  if (i % 2 == 0)
  {
   rep(j, 0, m)
   {
    if (cnt == k - 1)
    {
     vec.push_back(i + 1);
     vec.push_back(j + 1);
    }
    else
    {
     if ((i + j) % 2 == 0) cout << "2 " << i + 1 << ' ' << j + 1 << ' ';
     else
     {
      cnt++;
      cout << i + 1 << ' ' << j + 1 << endl;
     }
    }
   }
  }
  else
  {
   for (int j = m - 1; j >= 0; j--)
   {
    if (cnt == k - 1)
    {
     vec.push_back(i + 1);
     vec.push_back(j + 1);
    }
    else
    {
     if ((i + j) % 2 == 0) cout << "2 " << i + 1 << ' ' << j + 1 << ' ';
     else
     {
      cnt++;
      cout << i + 1 << ' ' << j + 1 << endl;
     }
    }
   }
  }
 }
 cout << sz(vec) / 2 << ' ';
 rep(i, 0, sz(vec)) cout << vec[i] << ' ';
 
 return 0;
}
