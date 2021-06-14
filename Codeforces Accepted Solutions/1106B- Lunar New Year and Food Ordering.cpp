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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
ll brr[N], crr[N];// quantity, price
 
int main()
{
 assem99;
 
 
 pair<ll, pair<ll, ll>> arr[N]; // price, index, quantity
 queue<pair<ll, pair<ll, ll>>> q;
 ll n, m; cin >> n >> m;
 f(i, 0, n) cin >> brr[i];
 f(i, 0, n)
 {
  cin >> crr[i];
  arr[i].F = crr[i], arr[i].S.F = i, arr[i].S.S = brr[i];
 }
 sort(arr, arr + n);
 f(i, 0, n)
 {
  q.push({ arr[i].F, {arr[i].S.F, arr[i].S.S} });
 }
 f(i, 0, m)
 {
  ll ans = 0;
  ll id, num; cin >> id >> num; id--;
  //cout << brr[id] <<' '<<num << endl << endl;
  ans += min(brr[id], num) * crr[id];
  ll added = min(brr[id], num);
  num -= added, brr[id] -= added;
  while (num != 0)
  {
   if (q.empty())break;
   if (brr[q.front().S.F] == 0)q.pop();
   else
   {
    ans += min(brr[q.front().S.F], num) * q.front().F;
    ll add = min(brr[q.front().S.F], num);
    num -= add, brr[q.front().S.F] -= add;
   }
  }
  if(!num) cout << ans << endl;
  else cout << "0"<<endl;
 }
 
 
 return 0;
}
