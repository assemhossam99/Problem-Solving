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
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n + 5];
        for (int i = 0; i < n; i++) cin >> arr[i];
        ll ans = 0;
        for (int i = 1; i < n; i++) ans += (arr[i] < arr[i - 1]) ? arr[i - 1] - arr[i] : 0;
        cout << ans << endll;
    }
 
 
    return 0;
}
