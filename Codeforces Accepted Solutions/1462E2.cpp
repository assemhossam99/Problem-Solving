#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const int mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;

ll fact[N], inv[N];
ll fp(ll base, ll exp){
    if (exp == 0) return 1;
    ll ans = fp(base, exp / 2);
    if (exp % 2 == 0) return (ans * ans) % mod;
    else return (((ans * ans)% mod) * base)% mod;
}
void calcFacAndInv(ll n){
    fact[0] = inv[0] = 1;
    for (ll i = 1; i <= n; i++){
        fact[i] = (i * fact[i - 1]) % mod;
        inv[i] = fp(fact[i], mod - 2);
    }
}
ll ncr(ll n, ll r){
    if(r > n) return 0;
    return ((fact[n] * inv[r]) % mod * inv[n - r]) % mod;
}
int main()
{
    assem99
    calcFacAndInv(200003);
    int t; cin>>t;
    while(t--)
    {
        int n, m, k; cin>>n>>m>>k;
        int arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        ll ans = 0;
        for(int i = 0; i  < n; i++)
        {
            int start = upper_bound(arr, arr + n, arr[i] - (k + 1)) - arr;
            int cnt = (i - start) + 1;
            if(cnt - 1 >= m - 1) ans += ncr(cnt - 1, m - 1), ans %= mod;
        }
        cout<<ans<<endll;
    }

    return 0;
}