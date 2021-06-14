#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n, z; cin>>n>>z;
    int arr[n + 5];
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n);
    int i = 0, j = (n / 2), ans = 0;
    while(i < n / 2 and j < n)
    {
        if(arr[j] - arr[i] >= z)
            ans++,
            i++,
            j++;
        else j++;
    }
    cout<<ans;
 
    return 0;
}
