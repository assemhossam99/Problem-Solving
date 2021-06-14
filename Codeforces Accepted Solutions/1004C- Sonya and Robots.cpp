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
int x[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[8] = { -1, 0, 1, -1, 1, -1, 0, -1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
 
int arr[N], brr[N], crr[N];
 
int main()
{
 assem99;
 
 f(i, 0, N) brr[i] = 1e9;
 ll fans = 0;
 ll n; cin >> n;
 f(i, 0, n)
 {
  cin >> crr[i];
  arr[crr[i]] = i;
  brr[crr[i]] = min(brr[crr[i]], i);
 }
 sort(arr, arr + N);
 f(i, 0, N)
 {
  if (brr[i] == 1e9) continue;
  ll start = 0, end = N, mid, ans = N;
  while (start <= end)
  {
   //cout << "HERE" << endl;
   mid = (start + end) / 2;
   //cout << arr[mid] << endl;
   if (brr[i] >= arr[mid]) start = mid + 1;
   else
   {
    //cout << "HEREEEEEEEEE" << endl;
    end = mid - 1;
    ans = mid;
   }
  }
  //cout << N - ans + 1<< endl;
  fans += N - ans;
 }
 cout << fans;
 return 0;
}
