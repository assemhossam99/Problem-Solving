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
#include <unordered_map>
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
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5;
const double pi = acos(-1);
using namespace std;
 
int n;
vector<int> primes;
bool prime[N];
void sieve(int n)
{
 memset(prime, true, sizeof prime);
 for (int p = 2; p * p <= n; p++)
 {
  if (prime[p])
  {
   for (int i = p * p; i <= n; i += p) prime[i] = false;
  }
 }
}
 
ull solve(int id, ull num, int div)
{
 if (div == n) return num;
 ull ans = 1e18;
 rep(i, 1, 64)
 {
  if (num * primes[id] > ans or div * (i + 1) > n) break;
  ans = min(ans, solve(id + 1, num *= primes[id], div * (i + 1)));
 }
 return ans;
}
 
int main()
{
 assem99;
 sieve(1e3);
 rep(i, 2, 1e3) if (prime[i]) primes.push_back(i);
 cin >> n;
 cout<<solve(0, 1, 1);
 return 0;
}
