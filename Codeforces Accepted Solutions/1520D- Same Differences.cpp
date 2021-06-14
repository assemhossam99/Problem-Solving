#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        map<ll, ll> mp;
        ll ans = 0;
        for(int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            mp[arr[i] - i]++;
        }
        for(auto it : mp)
        {
            ans += ((it.second * (it.second - 1)) / 2);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
