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
#include <unordered_set>
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
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
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
int arr[N];
map <ll, ll> freq, id;
 
int main()
{
 assem99;
 int n; cin >> n;
 ll cnt = 0;
 rep(i, 0, n)
 {
  cin >> arr[i];
  freq[arr[i]]++;
  id[arr[i]] = i;
 }
 ll lastt = id[0];
 rep(i, 0, n)
 {
  if (i and i > lastt) cnt++;
  lastt = max(lastt, id[arr[i]]);
 }
 cout << fp(2, cnt);
 
 return 0;
}
