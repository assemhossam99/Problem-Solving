#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
ll n, m, k, arr[50][50], ans, half;
map<pair<pair<int, int>, ll>, ll> mp;
 
void solve1(int i, int j, ll cur, int steps)
{
    cur ^= arr[i][j];
    if(steps == half)
    {
        mp[{{i, j}, cur}]++;
        return;
    }
    if(i + 1 < n) solve1(i + 1, j, cur, steps + 1);
    if(j + 1 < m) solve1(i, j + 1, cur, steps + 1);
}
 
void solve2(int i, int j, ll cur, int steps)
{
    if(steps == n + m - 2 - half)
    {
        if(mp.find({{i, j}, cur ^ k}) != mp.end()) ans += mp[{{i, j}, cur ^ k}];
        return;
    }
    if(i - 1 >= 0) solve2(i - 1, j, cur ^ arr[i][j], steps + 1);
    if(j - 1 >= 0) solve2(i, j - 1, cur ^ arr[i][j], steps + 1);
}
 
int main()
{
    Assem99
    cin>>n>>m>>k;
    half = (n + m - 2) / 2;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin>>arr[i][j];
    solve1(0, 0, 0, 0);
    solve2(n - 1, m - 1, 0, 0);
    cout<<ans;
 
    return 0;
}
