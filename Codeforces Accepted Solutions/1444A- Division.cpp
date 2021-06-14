#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
map<ll, int> mp;
void getPrimes(int n)
{
    while (n % 2 == 0)
    {
        mp[2]++;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if (n > 2) mp[n]++;
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ll a, b; cin>>a>>b;
        if(a % b)
        {
            cout<<a<<endll;
            continue;
        }
        mp.clear();
        getPrimes(b);
        ll ans = 1;
        for(auto it : mp)
        {
            ll curA = a;
            while(curA % b == 0) curA /= it.first;
            if(curA % a) ans = max(ans, curA);
        }
        cout<<ans<<endll;
    }
 
 
    return 0;
}
