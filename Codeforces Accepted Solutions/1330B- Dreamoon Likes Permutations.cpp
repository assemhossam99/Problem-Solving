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
#define pll pair<ll, ll>
#define vii vector<ii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N];
 
int main()
{ 
 assem99;
 int t; cin >> t;
 while (t--)
 {
  vector<int> l, r;
  vii ans;
  bool first = true;
  int n; cin >> n;
  int freq[N] = { 0 };
  rep(i, 0, n) cin >> arr[i];
  rep(i, 0, n)
  {
   if (freq[arr[i]]) first = false;
   freq[arr[i]]++;
   if (first) l.push_back(arr[i]);
   else r.push_back(arr[i]);
  }
  bool flag = false;
  sort(l.begin(), l.end());
  sort(r.begin(), r.end());
  if (sz(r))
  {
   if (r[0] != 1)
   {
    flag = true;
   }
   else
   {
    rep(i, 1, sz(r))
    {
     if (r[i] - r[i - 1] != 1)
     {
      flag = true;
      break;
     }
    }
   }
  }
  if (sz(l))
  {
   if (l[0] != 1) flag = true;
   else
   {
    rep(i, 1, sz(l))
    {
     if (l[i] - l[i - 1] != 1)
     {
      flag = true;
      break;
     }
    }
   }
  }
  if (!flag)
  {
   if (sz(l) && sz(r)) ans.push_back(ii(sz(l), sz(r)));
   else if (sz(l)) ans.push_back(ii(sz(l), 0));
   else if (sz(r))ans.push_back(ii(0, sz(r)));
  }
  
  vector<int>l2, r2;
  first = true;
  flag = false;
  int freq2[N] = { 0 };
  for(int i = n - 1; i >= 0; i--)
  {
   if (freq2[arr[i]]) first = false;
   freq2[arr[i]]++;
   if (first) r2.push_back(arr[i]);
   else l2.push_back(arr[i]);
  }
  flag = false;
  sort(l2.begin(), l2.end());
  sort(r2.begin(), r2.end());
  if (sz(r2))
  {
   if (r2[0] != 1)
   {
    flag = true;
   }
   else
   {
    rep(i, 1, sz(r2))
    {
     if (r2[i] - r2[i - 1] != 1)
     {
      flag = true;
      break;
     }
    }
   }
  }
  if (sz(l2))
  {
   if (l2[0] != 1) flag = true;
   else
   {
    rep(i, 1, sz(l2))
    {
     if (l2[i] - l2[i - 1] != 1)
     {
      flag = true;
      break;
     }
    }
   }
  }
  if (!flag)
  {
   if (sz(l2) && sz(r2)) ans.push_back(ii(sz(l2), sz(r2)));
   else if (sz(l2)) ans.push_back(ii(sz(l2), 0));
   else if (sz(r2))ans.push_back(ii(0, sz(r2)));
  }
  if (sz(ans) == 2 && ans[1].F == ans[0].F && ans[1].S == ans[0].S) ans.pop_back();
  cout << sz(ans) << endl;
  rep(i, 0, sz(ans))
  {
   if (i && ans[i].F == ans[i - 1].F && ans[i].S == ans[i - 1].S)break;
   cout << ans[i].F << ' ' << ans[i].S << endl;
  }
 }
 
 return 0;
}
