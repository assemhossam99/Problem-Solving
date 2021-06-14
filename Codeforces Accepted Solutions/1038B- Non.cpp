 #include <iostream>
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
 #define f(i,a,b) for(int i=a; i<b; i++)
 #define F first
 #define S second
 #define sz(a) (int)(a).size()
 #define ReadFile freopen("input.txt","r",stdin)
 #define WriteFile freopen("output.txt","w",stdout)
 const int MOD = 1e9 + 7, N = 2e5 + 5;
 const double pi = acos(-1);
 
 ll gcd(ll a, ll b)
 {
  if (!a)
   return b;
  return gcd(b % a, a);
 }
 
 int main()
 {
  assem99;
  bool flag = false;
  ll n;
  cin >> n;
  ll ans;
  
  
   ll x = (n * (n + 1)) / 2;
   for (ll i = 1; i <= n; i++)
   {
    if (gcd(i, x - i) > 1)
    {
     ans = i;
     cout << "Yes" << endl << "1 " << i << endl << n - 1 << ' ';
     flag = true;
     break;
    }
   }
  
  if (flag)
  {
   for (ll i = 1; i <= n; i++)
   {
    if (i != ans)
     cout << i << ' ';
   }
  }
  else
   cout << "No";
  
  return 0;
 }
