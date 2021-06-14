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
        n *= 2;
        int arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; i += 2)
        {
            if(i + 1 < n) swap(arr[i], arr[i + 1]);
        }
        if(n % 2 == 0) swap(arr[0], arr[n - 1]);
        for(int i = 0; i < n; i++) cout<<arr[i]<<' ';
        cout<<endl;
    }
 
 
    return 0;
}
