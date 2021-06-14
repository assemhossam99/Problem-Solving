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
#define f(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 1e6 + 5;
const double pi = acos(-1);
 
ll  arr[50];
 
int main()
{
 assem99;
 
 arr[0] = 1;
 f(i, 1, 40) arr[i] = arr[i - 1] * 3;
 //cout << arr[3] << "HERE";
 int t; cin >> t;
 while (t--)
 {
  ull n; cin >> n;
  ull sum = 0, id = 0;
  f(i, 0, 40)
  {
   if (sum >= n) break;
   sum += arr[i];
   id = i;
  }
  //cout << sum << endl << endl;
  for (int i = id; i >= 0; i--)
  {
   if (sum - arr[i] >= n) sum -= arr[i];
  }
  cout << sum << endl;
 }
 
 return 0;
}
