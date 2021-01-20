#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

ll power1[N], power2[N];
ll fp(ll base, ll exp, int mod){
    if (exp == 0) return 1;
    ll ans = fp(base, exp / 2, mod);
    if (exp % 2 == 0) return (ans * ans) % mod;
    else return (((ans * ans)% mod) * base)% mod;
}

int main()
{
    assem99
    for(int i = 0; i < N; i++)
    {
        power1[i] = fp(2003, i, 1e9 + 7);
        power2[i] = fp(2011, i, 1e9 + 9);
    }
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int id = 0;
        map<pair<ll, ll>, ll> mp, freq;
        vector<pair<int, int>> vec;
        for(int i = 0; i < n; i++)
        {
            int u, v; cin>>u>>v;
            if(u < v) swap(u, v);
            vec.push_back({u, v});
            if(mp.find({u, v}) == mp.end()) mp[{u, v}] = ++id;
        }
        for(int i = 0; i < n; i++)
        {
            ll a = 0, b = 0;
            for(int j = i; j < n; j++)
            {
                a = (a + power1[mp[{vec[j].first, vec[j].second}]]) % ((int)(1e9 + 7));
                b = (b + power2[mp[{vec[j].first, vec[j].second}]]) % ((int)(1e9 + 9));
                freq[{a, b}]++;
            }
        }
        ll ans = 0;
        for(auto it : freq) ans += (it.second * (it.second - 1)) / 2;
        cout<<ans<<endll;
    }

    return 0;
}