#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n, m, k; cin>>n>>m>>k;
    int arr[n + 5], brr[m + 5];
    int g = 0;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < m; i++) cin>>brr[i];
    sort(arr, arr + n, greater<int>());
    sort(brr, brr + m, greater<int>());
    if(n > m) return cout<<"YES", 0;
    for(int i = 0; i < min(n, m); i++)
    {
        if(arr[i] > brr[i]) return cout<<"YES", 0;
    }
    cout<<"NO";
 
    return 0;
}
