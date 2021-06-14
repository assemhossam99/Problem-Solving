#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int arr[N], n;
int solve(int id)
{
    if(id == n) return 0;
    if(id == 1 or !id)
    {
        int ans = solve(id + 1);
        arr[id]++;
        ans = min(ans, solve(id + 1) + 1);
        arr[id] -= 2;
        ans = min(ans, solve(id + 1) + 1);
        arr[id]++;
        return ans;
    }
    int ans = oo;
    if(arr[id] - arr[id - 1] == arr[1] - arr[0]) ans = solve(id + 1);
    if(arr[id] - 1 - arr[id - 1] == arr[1] - arr[0]) arr[id]--, ans = min(ans, solve(id + 1) + 1), arr[id]++;
    if(arr[id] + 1 - arr[id - 1] == arr[1] - arr[0]) arr[id]++, ans = min(ans, solve(id + 1) + 1), arr[id]--;
    return ans;
}
 
int main()
{
    assem99
    cin>>n;
    rep(i, 0, n) cin>>arr[i];
    int ans = solve(0);
    if(ans >= oo) cout<<"-1"; else cout<<ans;
 
    return 0;
}
