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
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[10], ans[10];
 
int main()
{
 assem99;
 
 int i = 0;
 int n; cin >> n;
 while (n != 0)
 {
  int tmp = n % 10;
  n /= 10;
  f(j, 0, tmp) arr[j] += pow(10, i);
  i++;
 }
 int cntr = 0;
 f(j, 0, 10) if (arr[j]) cntr++;
 cout << cntr << endl;
 f(j, 0, 10) if (arr[j]) cout << arr[j] << ' ';
 
 return 0;
}
