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
bool arr[1005][1005];
 
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
 
 int n, m, k; cin >> n >> m >> k;
 f(i, 0, k)
 {
  int a, b; cin >> a >> b;
  arr[a][b] = true;
  if ((arr[a][b - 1] && arr[a - 1][b] && arr[a - 1][b - 1]) || (arr[a + 1][b] && arr[a + 1][b + 1] && arr[a][b + 1]) || (arr[a - 1][b] && arr[a - 1][b + 1] && arr[a][b + 1]) || (arr[a + 1][b] && arr[a + 1][b - 1] && arr[a][b - 1]))
  {
   cout << i + 1;
   return 0;
  }
 }
 
 cout << '0';
 
 return 0;
}
