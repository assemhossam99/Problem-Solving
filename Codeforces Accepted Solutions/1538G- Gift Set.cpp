#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 6e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        ll x, y, a, b; cin>>x>>y>>a>>b;
        if(x < y) swap(x, y);
        if(a < b) swap(a, b);
        if(a - b == 0)
        {
            cout<<y / a<<endl;
            continue;
        }
        if(a > x || b > y)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans = 0;
        ll diff = x - y;
        ans = diff / (a - b);
        if(ans * b > y || ans * a > x) cout<<y / b<<endl;
        else
        {
            x -= (ans * a);
            y -= (ans * b);
            if(x < y) swap(x, y);
            if(a > x || b > y)
            {
                cout<<ans<<endl;
                continue;
            }
            ll rem = (y / (a + b));
            ans += (rem * 2);
            x -= (rem * (a + b));
            y -= (rem * (a + b));
            if(y >= b && x >= a) ans++;
            cout<<ans<<endl;
        }
    }
 
    return 0;
}
