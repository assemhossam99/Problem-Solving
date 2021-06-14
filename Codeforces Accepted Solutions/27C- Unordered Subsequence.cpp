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
 
int main()
{
 assem99;
 vector<int> vec, vec2;
 int n; cin >> n;
 rep(i,0 , n)
 {
  int a; cin >> a;
  vec.push_back(a);
  vec2.push_back(a);
 }
 sort(vec2.begin(), vec2.end());
 if (vec == vec2) return cout << 0, 0;
 cerr << "Fuck";
 sort(vec2.rbegin(), vec2.rend());
 if (vec == vec2) return cout << 0, 0;
 cout << "3" << endl;
 bool inc;
 rep(i, 1, sz(vec))
 {
  if (vec[i] == vec[i - 1]) continue;
  else
  {
   inc = (vec[i] > vec[i - 1]);
   break;
  }
 }
 vector<int> ans;
 ans.push_back(1);
 if (inc)
 {
  rep(i, 1, n)
  {
   
   if(vec[i] < vec[i - 1])
   {
    ans.push_back(i);
    ans.push_back(i + 1);
    break;
   }
  }
 }
 else
 {
  rep(i, 0, n)
  {
   if (vec[i] > vec[i - 1])
   {
    ans.push_back(i);
    ans.push_back(i + 1);
    break;
   }
  }
 }
 for (auto it : ans) cout << it << ' ';
 
 return 0;
}
