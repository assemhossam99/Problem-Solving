#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e2 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

void getPrimes(ll n, vector<ll>& vec)
{
    while (n % 2 == 0)
    {
        vec.push_back(2);
        n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            vec.push_back(i);
            n /= i;
        }
    }
    if (n > 2) vec.push_back(n);
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> vec;
        getPrimes(n, vec);
        map<ll, int> mp;
        for(auto it : vec) mp[it]++;
        int cur = 0, cnt = 0;
        for(auto it : mp)
        {
            if(it.second > cnt)
            {
                cur = it.first;
                cnt = it.second;
            }
        }
        ll ans = 1;
        cnt --;
        vector<ll> v;
        for(auto it : vec)
        {
            if(it != cur or !cnt) ans *= it;
            else
            {
                v.push_back(it);
                cnt--;
            }
        }
        if(ans != 1) v.push_back(ans);
        cout<<sz(v)<<endll;
        for(auto it : v) cout<<it<<' ';
        cout<<endll;
    }

    return 0;
}