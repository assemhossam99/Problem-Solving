#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int arr[N], parent[N];
 
int main()
{
    assem99
    int n; cin>>n;
    for(int i = 2; i<= n; i++) cin>>parent[i];
    for(int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        if(i and ~arr[i])
        {
            if(arr[parent[i]] == -1) arr[parent[i]] = arr[i];
            else arr[parent[i]] = min(arr[i], arr[parent[i]]);
        }
    }
    ll ans = arr[1];
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == -1) arr[i] = arr[parent[i]];
        if(arr[i] < arr[parent[i]]) return cout<<"-1", 0;
        ans += abs(arr[i] - arr[parent[i]]);
    }
    cout<<ans;
 
    return 0;
}
