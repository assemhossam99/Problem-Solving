#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 6e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        ll sum = 0;
        for(int i = 0; i < n; i++) cin>>arr[i], sum += arr[i];
        if(sum % n != 0) cout<<-1<<endl;
        else
        {
            ll cur = sum / n;
            int cnt = 0;
            for(int i = 0; i < n; i++) if(arr[i] > cur) cnt++;
            cout<<cnt<<endl;
        }
    }
 
    return 0;
}
