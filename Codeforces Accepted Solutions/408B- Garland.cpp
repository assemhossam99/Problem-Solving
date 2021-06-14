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
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e4 + 5;
const double pi = acos(-1);
using namespace std;
 
map<char, int> freq1, freq2;
 
int main()
{
 assem99;
 string s, t; cin >> s >> t;
 rep(i, 0, sz(s)) freq1[s[i]]++;
 rep(i, 0, sz(t)) freq2[t[i]]++;
 set<char> st;
 rep(i, 0, sz(t)) st.insert(t[i]);
 int ans = 0;
 for (auto it : st)
 {
  if (!freq1[it]) return cout << "-1", 0;
  ans += min(freq1[it], freq2[it]);
 }
 cout << ans;
 
 return 0;
}
