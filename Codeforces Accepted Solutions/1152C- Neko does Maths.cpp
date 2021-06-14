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
#define ld long double
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
 
ll fact[N], inv[N];
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
 
ll gcd(ll a, ll b)
{
 if (!a)return b;
 return gcd(b % a, a);
}
 
ll lcm(ll a, ll b)
{
 return (a * b) / gcd(a, b);
}
int main()
{
 assem99;
 
 vector<ll> vec;
 ll a, b; cin >> a >> b;
 if (a > b) swap(a, b);
 ll diff = b - a;
 for (ll i = 1; i * i <= diff; i++)
 {
  if (diff % i == 0)
  {
   vec.push_back(i);
   vec.push_back(diff / i);
  }
 }
 ll mn = lcm(a, b);
 ll ans = 0;
 f(i, 0, sz(vec))
 {
  ll k = vec[i] - (a % vec[i]);
  if (lcm(a + k, b + k) < mn)
  {
   mn = lcm(a + k, b + k);
   ans = k;
  }
 }
 cout << ans;
 
 return 0;
}
