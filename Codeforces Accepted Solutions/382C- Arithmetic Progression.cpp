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
#define ever (;;)
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
using namespace std;
 
int arr[N];
map<int, int> mp;
 
int main()
{
 assem99;
 int n; cin >> n;
 rep(i, 0, n) cin >> arr[i];
 sort(arr, arr + n);
 if (n == 1) cout << "-1";
 else if (n == 2)
 {
  if (arr[0] == arr[1])
  {
   cout << "1" << endl << arr[0];
  }
  else if ((arr[0] + arr[1]) % 2 == 0)
  {
   cout << "3" << endl;
   int diff = arr[1] - arr[0];
   cout << arr[0] - diff << ' ' << (arr[0] + arr[1]) / 2 << ' ' << arr[1] + diff;
  }
  else
  {
   cout << "2" << endl;
   int diff = arr[1] - arr[0];
   cout << arr[0] - diff << ' ' << arr[1] + diff;
  }
 }
 else
 {
  set<int> st;
  rep(i, 1, n)
  {
   st.insert(arr[i] - arr[i - 1]);
   mp[arr[i] - arr[i - 1]]++;
  }
  if (sz(st) > 2) cout << "0";
  else if (sz(st) == 1)
  {
   if (arr[0] == arr[n - 1])
   {
    cout << 1 << endl << arr[0];
   }
   else
   {
    cout << "2" << endl;
    cout << arr[0] - *st.begin() << ' ' << arr[n - 1] + *st.begin();
   }
  }
  else
  {
   vector<int> vec;
   for (auto it : st) vec.push_back(it);
   if (vec[1] % 2 == 0 && vec[1] / 2 == vec[0] && mp[vec[1]] == 1)
   {
    cout << "1" << endl;
    rep(i, 1, n)
    {
     if (arr[i] - arr[i - 1] == vec[1])
     {
      cout << (arr[i] + arr[i - 1]) / 2;
      break;
     }
    }
   }
   else cout << "0";
  }
 }
 
 return 0;
}
