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
using namespace std;
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define vii vector<ii>
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
ll arr[N];
 
int main()
{
 assem99;
 
 int t; cin >> t;
 while (t--)
 {
  int n, k; cin >> n >> k;
  int ans = 0;
  f(i, 0, n)
  {
   cin >> arr[i];
   if (arr[i] >= k) ans++;
  }
  sort(arr, arr + n, greater<int>());
  bool done = false;
  ll sum = 0;
  f(i, 0, n)
  {
   sum += arr[i];
   //cout << sum << endl;
   
   
    //cout << sum / (i + 1) << endl;
    if (sum / (i + 1) >= k) continue;
    else if(sum / (i + 1) < k)
    {
     ans = max(ans,i);
     done = true;
     break;
    }
   
  }
  if (!done && sum / n >= k) ans = max(n, ans);
  cout << ans << endl;
 }
 
 return 0;
}
