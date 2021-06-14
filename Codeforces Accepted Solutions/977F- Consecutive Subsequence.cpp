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
 
int main()
{
 assem99;
 
 map<int, int> mp;
 vector<int> vec;
 int arr[N], dp[N];
 int n; cin >> n;
 f(i, 0, n) cin >> arr[i];
 f(i, 0, n)
 {
  if (mp[arr[i] - 1] == 0) mp[arr[i]] = 1;
  else mp[arr[i]] = mp[arr[i] - 1] + 1;
  dp[i] = mp[arr[i]];
 }
 int mx = -1, id = 0;
 f(i, 0, n)
 {
  if (dp[i] > mx)
  {
   mx = dp[i];
   id = i;
  }
 }
 int cur = arr[id] - 1;
 vec.push_back(id + 1);
 for (int i = id - 1; i >= 0; i--)
 {
  if (arr[i] == cur)
  {
   vec.push_back(i + 1);
   cur--;
  }
 }
 cout << sz(vec) << endl;
 for (int i = sz(vec) - 1; i >= 0; i--) cout << vec[i] << ' ';
 
 return 0;
}
