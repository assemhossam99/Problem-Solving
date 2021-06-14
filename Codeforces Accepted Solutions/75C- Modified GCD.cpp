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
 
 map<int, int> mp;
 vector<int> GCDs;
 int a, b; cin >> a >> b;
 for (int i = 1; i * i <= a; i++)
 {
  if (a % i == 0)
  {
   mp[i]++;
   if(i != a / i)mp[a / i]++;
  }
 }
 for (int i = 1; i * i <= b; i++)
 {
  if (b % i == 0)
  {
   mp[i]++;
   if(i != b / i) mp[b / i]++;
  }
 }
 map<int, int>::iterator it;
 for (it = mp.begin(); it != mp.end(); it++)
 {
  if (it->S == 2) GCDs.push_back(it->F);
 }
 sort(GCDs.begin(), GCDs.end());
 int t; cin >> t;
 while(t--)
 {
  int l, r; cin >> l >> r;
  int start = 0, end = sz(GCDs) - 1, mid, ans = -1;
  while (start <= end)
  {
   mid = (start + end) / 2;
   if (GCDs[mid] <= r && GCDs[mid] >= l)
   {
    ans = GCDs[mid];
    start = mid + 1;
   }
   else if (GCDs[mid] > r)
   {
    end = mid - 1;
   }
   else if (GCDs[mid] < l)
   {
    start = mid + 1;
   }
  }
  cout << ans << endl;
 }
 
 return 0;
}
