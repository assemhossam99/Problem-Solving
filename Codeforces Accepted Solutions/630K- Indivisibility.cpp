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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll gcd(ll a, ll b)
{
 if (!a)return b;
 return gcd(b % a, a);
}
ll n, ans = 0;
int arr[] = { 2, 5, 3 ,7 };
 
void solve()
{
 for (int mask = 0; mask < 16; mask++)
 {
  ll inter = 1, taken = 0;
  for (int i = 0; i < 4; i++)
  {
   if (mask & (1 << i))
   {
    taken++;
    inter = (inter * arr[i]) / gcd(inter, arr[i]);
   }
  }
  if (taken % 2) ans -= n / inter;
  else ans += n / inter;
 }
}
 
int main()
{
 assem99;
 cin >> n;
 solve();
 cout << ans;
 
 return 0;
}
