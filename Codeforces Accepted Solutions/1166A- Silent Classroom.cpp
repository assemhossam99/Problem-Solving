#include <iostream>
#include <stdio.h>
#include <string>
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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll fact[N], inv[N], freq[30];
 
ll fp(ll b, ll p)
{
 if (p == 0)
  return 1;
 ll ans = fp(b, p / 2);
 ans = (ans * ans) % MOD;
 
 if (p % 2 != 0)
  ans = (ans *(b % MOD)) % MOD;
 return ans;
}
 
void calc(ll n)
{
 fact[0] = inv[0] = 1;
 for (ll i = 1; i <= n; i++)
 {
  fact[i] = (i * fact[i - 1]) % MOD;
  inv[i] = fp(fact[i], MOD - 2);
 }
}
 
ll ncr(ll n, ll r)
{
 return ((fact[n] * inv[r]) % MOD * inv[n - r]) % MOD;
}
int main()
{
 assem99;
 
 calc(1000);
 int n; cin >> n;
 
 ll ans = 0;
 f(i, 0, n)
 {
  string s; cin >> s;
  freq[s[0] - 'a']++;
 }
 f(i, 0, 26)
 {
  ll a, b;
  if (freq[i] % 2 == 0) a = b = freq[i] / 2;
  else
  {
   a = freq[i] / 2, b = a + 1;
  }
  if (a == 0) continue;
  if(a >= 2)
   ans += ncr(a, 2);
  if(b >= 2)
   ans += ncr(b, 2);
 }
 cout << ans;
 
 return 0;
}
