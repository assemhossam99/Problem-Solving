#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
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
        for(int i = 0; i < n; i++) cin>>arr[i];
        ll cnt = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < 0)
            {
                arr[i] *= -1;
                int cur = min(cnt, arr[i]);
                arr[i] -= cur;
                cnt -= cur;
                if(arr[i]) ans += arr[i], arr[i] = 0;
            }
            else cnt += arr[i];
        }
        cout<<ans<<endll;
    }
 
    return 0;
}
