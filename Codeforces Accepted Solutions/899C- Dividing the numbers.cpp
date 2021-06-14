#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    vector<ll> vec;
    ll n; cin>>n;
    if(n % 2 == 0)
    {
        if((n / 2) % 2 == 0)
        {
            cout<<0<<endl;
            for(int i = 1, j = n; i <= n / 2; i += 2, j -= 2)
            {
                vec.push_back(i);
                vec.push_back(j);
            }
        }
        else
        {
            cout<<1<<endl;
            for(int i = 1, j = n; i <= n / 2; i += 2, j -= 2)
            {
                if(i == n / 2) vec.push_back(i);
                else
                {
                    vec.push_back(i);
                    vec.push_back(j);
                }
            }
        }
    }
    else
    {
        ll cur = (n * (n + 1)) / 2;
        if(cur & 1)
        {
            cout<<1<<endl;
            ll i = n;
            cur /= 2;
            while(i >= 1)
            {
                if(cur >= i)
                {
                    vec.push_back(i);
                    cur -= i;
                }
                i--;
            }
        }
        else
        {
            cout<<0<<endl;
            ll i = n;
            cur /= 2;
            while(i >= 1)
            {
                if(cur >= i)
                {
                    vec.push_back(i);
                    cur -= i;
                }
                i--;
            }
        }
    }
    cout<<sz(vec)<<' ';
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
