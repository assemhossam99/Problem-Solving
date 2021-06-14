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
 
ll arr[105];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 multiset<ll> st;
 vector<ll> ans;
 f(i, 0, n)
 {
  cin >> arr[i];
  st.insert(arr[i]);
 }
 ll cur;
 f(i, 0, n)
 {
  if (arr[i] % 3 != 0 && st.find(arr[i] * 2) == st.end())
  {
   cur = arr[i];
   arr[i] = -1;
   st.erase(arr[i]);
   break;
  }
  else if (arr[i] % 3 == 0 && st.find(arr[i] / 3) == st.end() && st.find(arr[i] * 2) == st.end())
  {
   cur = arr[i];
   arr[i] = -1;
   st.erase(arr[i]);
   break;
  }
 }
 ans.push_back(cur);
 f(j, 0, n - 1)
 {
  f(i, 0, n)
  {
   if (arr[i] == -1) continue;
   if (arr[i] * 2 == cur)
   {
    ans.push_back(arr[i]);
    cur = arr[i];
    arr[i] = -1;
    st.erase(arr[i]);
    break;
   }
   else if (arr[i] % 3 == 0 && arr[i] / 3 == cur)
   {
    ans.push_back(arr[i]);
    cur = arr[i];
    arr[i] = -1;
    st.erase(arr[i]);
    break;
   }
  }
 }
 for (int i = sz(ans) - 1; i >= 0; i--)
 {
  cout << ans[i] << ' ';
 }
 
 return 0;
}
