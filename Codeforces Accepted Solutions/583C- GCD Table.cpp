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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
ll gcd(ll a, ll b)
{
 if (!a)return b;
 return gcd(b % a, a);
}
int arr[N];
int main()
{
 assem99;
 map<int, int> mp;
 int n; cin >> n;
 rep(i, 0, n * n)
 {
  int a; cin >> a;
  mp[-a]++;
 }
 int id = n - 1;
 for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
 {
  int cur = -it->F;
  while (it->S)
  {
   it->S--;
   arr[id] = cur;
   rep(i, id + 1, n) mp[-gcd(arr[id], arr[i])] -= 2;
   id--;
  }
 }
 rep(i, 0, n) cout << arr[i] << ' ';
 
 return 0;
}
