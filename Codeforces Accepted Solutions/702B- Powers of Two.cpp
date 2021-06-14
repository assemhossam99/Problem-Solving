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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll arr[N], powers[40];
vector<ll> vec;
 
int main()
{
 assem99;
 
 powers[0] = 1;
 f(i, 1, 41) powers[i] = powers[i - 1] * 2;
 
 ll n; cin >> n;
 f(i, 0, n)
 {
  ll a; cin >> a; 
  vec.push_back(a);
 }
 sort(vec.begin(), vec.end());
 ll ans = 0;
 f(i, 0, sz(vec) - 1)
 {
  f(j, 0, 41)
  {
   ll l = lower_bound(vec.begin() + i + 1, vec.end(), powers[j] - vec[i]) - vec.begin();
   ll r = upper_bound(vec.begin() + i + 1, vec.end(), powers[j] - vec[i]) - vec.begin();
   ans += (r - l);
  }
 }
 cout << ans;
 
 return 0;
}
