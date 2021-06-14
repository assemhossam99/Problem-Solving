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
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
ll arr[N], brr[N];
 
int main()
{
 assem99;
 
 set<ll> st;
 ll n, k; cin >> n >> k;
 f(i, 0, n)
 {
  cin >> arr[i];
  brr[i] = arr[i];
 }
 sort(brr, brr + n, greater<int>());
 ll sum = 0;
 f(i, 0, k)
 {
  sum += brr[i];
  st.insert(brr[i]);
 }
 ll ans = 1, id = -1;
 f(i, 0, n)
 {
  if (st.find(arr[i]) != st.end())
  {
   if (id != -1) ans = (ans % MOD * (i - id) % MOD) % MOD;
   id = i;
  }
 }
 cout << sum << ' ' << ans;
 
 return 0;
}
