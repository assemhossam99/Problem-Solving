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
#define ii pair<int, int>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 1e9 + 7, N = 1.5e7 + 5;
const double pi = acos(-1);
 
ll gcd(ll a, ll b)
{
 if (!a)return b;
 return gcd(b % a, a);
}
 
int prime[N];
void sieve()
{
 f(i, 2, N) prime[i] = i;
 for (int i = 2; i * i <= N; i++)
 {
  if (prime[i] == i)
  {
   for (int j = i * i; j < N; j += i) prime[j] = i;
  }
 }
}
 
int arr[N], GCD;
int main()
{
 assem99;
 
 sieve();
 map<int, int> mp;
 int n; cin >> n;
 f(i, 0, n)
 {
  cin >> arr[i];
  if (!i) GCD = arr[i];
  else GCD = gcd(GCD, arr[i]);
 }
 f(i, 0, n) arr[i] /= GCD;
 f(i, 0, n)
 {
  int x = arr[i];
  while (x > 1)
  {
   int p = prime[x];
   mp[p] ++;
   while (x % p == 0) x /= p;
  }
 }
 int ans = 0;
 for (auto it : mp)
 {
  ans = max(ans, it.S);
 }
 if (ans == 0) cout << "-1";
 else cout << n - ans;
 
 return 0;
}
