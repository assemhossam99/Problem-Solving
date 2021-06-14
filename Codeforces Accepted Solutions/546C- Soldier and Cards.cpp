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
int y[] = { -1, 0, 1, 0, 1, -1, -1, -1 };
const int MOD = 998244353, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[100], brr[100];
 
int main()
{
 assem99;
 
 int n; cin >> n;
 queue<int> q1, q2, tmp1, tmp2;
 int a; cin >> a;
 f(i, 0, a)
 {
  int x; cin >> x;
  q1.push(x);
 }
 tmp1 = q1;
 int b; cin >> b;
 f(i, 0, b)
 {
  int x; cin >> x;
  q2.push(x);
 }
 tmp2 = q2;
 int win;
 int cntr = 0;
 while (1)
 {
  //cout << "FUCK" << endl;
  if (q1.empty())
  {
   win = 2;
   break;
  }
  else if (q2.empty())
  {
   win = 1;
   break;
  }
  cntr++;
  if (q1.front() > q2.front())
  {
   q1.push(q2.front());
   q1.push(q1.front());
   q2.pop();
   q1.pop();
  }
  else if (q1.front() < q2.front())
  {
   q2.push(q1.front());
   q2.push(q2.front());
   q2.pop();
   q1.pop();
  }
  if (q1 == tmp1 && q2 == tmp2)
  {
   win = -1;
   break;
  }
  if (cntr > 1000 * n)
  {
   win = -1;
   break;
  }
 }
 //cout << cntr << endl;
 if (win == -1) cout << win;
 else cout << cntr << ' '<<win;
 
 
 return 0;
}
