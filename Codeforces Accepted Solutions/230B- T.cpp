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
const int MOD = 1e9 + 7, N = 2e6 + 5;
using namespace std;
 
bool prime[N];
void sieve()
{
 memset(prime, true, sizeof(prime));
 for (int p = 2; p * p <= N; p++)
 {
  if (prime[p])
  {
   for (int i = p * p; i <= N - 1; i += p)
   {
    prime[i] = false;
   }
  }
 }
}
 
int main()
{
 assem99;
 sieve();
 int n; cin >> n;
 rep(i, 0, n)
 {
  ll a; cin >> a;
  ll root = sqrt(a);
  (root * root == a && prime[root] && a != 1) ? cout << "YES" << endl : cout << "NO" << endl;
 }
 
 return 0;
}
