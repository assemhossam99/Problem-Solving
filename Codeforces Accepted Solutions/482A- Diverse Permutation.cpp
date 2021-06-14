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
#define ii pair<int, int>
#define f(i,a,b) for(int i=a; i<b; i++)
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
 
 int n, k; cin >> n >> k;
 int cur = 1;
 for (int i = 0; i < n; i += 2) arr[i] = cur, cur++;
 cur = n;
 for (int i = 1; i < n; i += 2) arr[i] = cur, cur--;
 f(i, 0, k) cout << arr[i] << ' ';
 if (arr[k - 1] > arr[k])
 {
  cur = arr[k - 1] - 1;
  f(i, k, n) cout << cur--<<' ';
 }
 else
 {
  cur = arr[k - 1] + 1;
  f(i, k, n) cout<<cur++ << ' ';
 }
 
 return 0;
}
