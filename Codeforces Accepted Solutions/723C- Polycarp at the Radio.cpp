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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
map<int, int> freq, freq2;
 
int main()
{
 assem99;
 multiset<int> more, need;
 int arr[N];
 int n, m; cin >> n >> m;
 rep(i, 0, n)
 {
  cin >> arr[i];
  freq[arr[i]]++;
 }
 int mn = n / m;
 rep(i, 1, m + 1)
 {
  while (freq[i] > mn)
  {
   more.insert(i);
   freq[i]--;
  }
  while (freq[i] < mn)
  {
   need.insert(i);
   freq[i]++;
  }
 }
 rep(i, 0, n) if (arr[i] > m) more.insert(arr[i]);
 int cnt = 0;
 vector<int> needed;
 for (auto it : need) needed.push_back(it);
 for (auto it : need) freq2[it]++;
 for (auto it : more) freq2[it]++;
 rep(i, 0, n)
 {
  if (more.find(arr[i]) != more.end() and sz(need))
  {
   freq2[arr[i]]--;
   if(!freq2[arr[i]])more.erase(arr[i]);
   cnt++;
   arr[i] = needed.back();
   needed.pop_back();
   freq2[arr[i]]--;
   if(!freq2[arr[i]])need.erase(arr[i]);
  }
 }
 cout << mn << ' ' << cnt << endl;
 rep(i, 0, n) cout << arr[i] << ' ';
 
 return 0;
}
