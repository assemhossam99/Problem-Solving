#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e3 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5], sz = n + 2;
        for(int i = 0; i < n + 2; i++) cin>>arr[i];
        sort(arr, arr + sz);
        ll sum = 0;
        for(int i = 0; i < n + 1; i++) sum += arr[i];
        int idx = -1;
        for(int i = 0; i < n + 1; i++)
        {
            if(sum - arr[i] == arr[n + 1]) idx = i;
        }
        if(idx != -1)
        {
            for(int i = 0; i < n + 1; i++)
            {
                if(i != idx) cout<<arr[i]<<' ';
            }
        }
        else
        {
            sum = 0;
            for(int i = 0; i < n; i++) sum += arr[i];
            if(sum == arr[n])
            {
                for(int i = 0; i< n; i++) cout<<arr[i]<<' ';
            }
            else cout<<-1;
        }
        cout<<endl;
    }
 
    return 0;
}
