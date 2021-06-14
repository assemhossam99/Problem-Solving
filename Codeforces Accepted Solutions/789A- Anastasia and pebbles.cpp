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
 
int main()
{
 assem99;
 
 int n, k; cin >> n >> k;
 priority_queue<int> pq;
 f(i, 0, n)
 {
  int a; cin >> a;
  pq.push(a);
 }
 int ans = 0;
 while (pq.top() != 0)
 {
  if (pq.top() == 2 * k)
  {
   ans++;
   pq.pop();
   pq.push(0);
  }
  else if (pq.top() <= 2 * k)
  {
   if (pq.top() > k)
   {
    ans++;
    pq.pop();
    pq.push(0);
   }
   else
   {
    ans++;
    pq.pop();
    pq.pop();
    pq.push(0);
    pq.push(0);
   }
  }
  else
  {
   ans += pq.top() / (k * 2);
   pq.push(pq.top() % (k * 2));
   pq.pop();
  }
 }
 cout << ans;
 
 return 0;
}
