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
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, INF = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n, k; cin>>n>>k;
    ll cnt = 0, arr[N], ans = 0;
    map<int, int> mp;
    bool found = false;
    mp[0] = 1;
    rep(i, 0, n) cin>>arr[i];
    rep(i, 0, n)
    {
        if(arr[i] > k) cnt++;
        else if(arr[i] < k) cnt--;
        else found = true;
        if(found) ans += mp[cnt] + mp[cnt - 1];
        else mp[cnt]++;
    }
    cout<<ans;
 
    return 0;
}
