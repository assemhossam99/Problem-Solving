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
 
int main()
{
 assem99;
 
 vector<pair<ll, ll>> vec, fans;
 ll arr[N];
 ll n, l, r; cin >> n >> l >> r;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n)
 {
  ll p; cin >> p;
  vec.push_back({p, i}); // p, pos
 }
 ll mn;
 bool bazet = false;
 sort(vec.begin(), vec.end());
 f(i, 0, n)
 {
  if (fans.empty()) fans.push_back({ vec[i].S, l }), mn = l - arr[vec[i].S];
  else
  {
   ll start = l, end = r, mid, ans = -1;
   while (start <= end)
   {
    mid = (start + end) / 2;
    if (mid - arr[vec[i].S] > mn)
    {
     ans = mid;
     end = mid - 1;
    }
    else start = mid + 1;
   }
   if (ans == -1)
   {
    bazet = true;
    break;
   }
   mn = ans - arr[vec[i].S];
   fans.push_back({ vec[i].S, ans });
  }
 }
 sort(fans.begin(), fans.end());
 if (bazet) cout << "-1";
 else f(i, 0, sz(fans)) cout << fans[i].S << ' ';
 
 return 0;
}
