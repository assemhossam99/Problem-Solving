#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
ll fact[N], pow1[N], pow2[N];
void calcFact()
{
    fact[0] = fact[1] = 1;
    for(int i = 2; i < N; i++) fact[i] = (fact[i - 1] * i) % MOD;
}
 
void calcPow()
{
    pow1[0] = pow2[0] = 1;
    for(int i = 1; i < N; i++)
    {
        pow1[i] = (pow1[i - 1] * p1) % MOD;
        pow2[i] = (pow2[i - 1] * p2) % MOD2;
    }
}
 
int main()
{
    Assem99
    int n, m; cin>>n>>m;
    vector<ll> vec[m + 5];
    calcFact();
    calcPow();
    for(int i = 0; i < n; i++)
    {
        int nn; cin>>nn;
        for(int j = 0; j < nn; j++)
        {
            int x; cin>>x;
            vec[x].push_back(i + 1);
        }
    }
    map<pair<ll, ll>, int> mp;
    for(int i = 1; i <= m; i++)
    {
        ll hash1 = 0, hash2 = 0;
        for(int j = 0; j < sz(vec[i]); j++)
        {
            hash1 = (hash1 + vec[i][j] * pow1[j + 1]) % MOD;
            hash2 = (hash2 + vec[i][j] * pow2[j + 1]) % MOD;
        }
        mp[{hash1, hash2}]++;
    }
    ll ans = 1;
    for(auto it : mp)
    {
        ans = (ans * fact[it.second]) % MOD;
    }
    cout<<ans;
 
    return 0;
}
