#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 5e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll arr[n + 5];
        vector<ll> vec;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i) vec.push_back(abs(arr[i] - arr[i - 1])), sum += vec.back();
        }
        ll ans = 1e18;
        vec.push_back(0);
        for(int i = 0; i < n; i++)
        {
            if(!i) ans = min(ans, sum - vec[i]);
            else if(i == n - 1) ans = min(ans, sum - vec[i - 1]);
            else ans = min(ans, sum - (vec[i] + vec[i - 1]) + abs(arr[i - 1] - arr[i + 1]));
        }
        cout<<ans<<endll;
    }

    return 0;
}