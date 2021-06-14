#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll freq[N], f[N][100];
void solve(ll n)
{
    ll cnt = 0;
    while(n >= 1)
    {
        f[n][cnt]++;
        n /= 2;
        cnt++;
    }
}
int main()
{
    assem99
    int k, n; cin>>n>>k;
    ll arr[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        solve(arr[i]);
    }
    sort(arr, arr + n);
  //  for(int i = 0; i <= N; i++) if(freq[i] >= k) return cout<<0, 0;
    ll final = 1e18;
    for(int i = 1; i < N; i++)
    {
        ll add = 0;
        ll ans = 0;
        for(int j = 0; j < 50; j++)
        {
            ans += j * min(f[i][j], k - add);
            add += f[i][j];
            //cout<<arr[i]<<' '<<add<<' '<<ans<<endl;
            if(add >= k)
            {
                final = min(final, ans);
                break;
            }
        }
    }
    cout<<final;
    return 0;
}
