#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("intel.in","r",stdin); freopen("intel.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
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
        int pos = 0, neg = 0, ans = 1, mn = 1e9;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] > 0) pos++;
            else neg++;
        }
        sort(arr, arr + n);
        if(n == 1 || !neg)
        {
            cout<<1<<endl;
            continue;
        }
        ans = neg;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > 0)
            {
                if(mn >= arr[i]) ans++;
                break;
            }
            else if(i) mn = min(mn, arr[i] - arr[i - 1]);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
