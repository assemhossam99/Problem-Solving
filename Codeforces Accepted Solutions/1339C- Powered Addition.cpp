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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5], mx = 0, diff = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        mx = arr[0];
        for(int i = 1; i < n; i++)
        {
            diff = max(diff, mx - arr[i]);
            mx = max(mx, arr[i]);
        }
        int ans = 0;
        while(diff)
        {
            ans++;
            diff /= 2;
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
