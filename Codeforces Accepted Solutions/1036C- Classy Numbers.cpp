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
 
vector<ll> vec;
void solve(int id, ll cur, ll cnt)
{
    if(id == 18)
    {
        vec.push_back(cur);
        return;
    }
    solve(id + 1, cur * 10, cnt);
    if(cnt < 3) for(int i = 1; i <= 9; i++) solve(id + 1, cur * 10 + i, cnt + 1);
}
 
int main()
{
    assem99
    vec.push_back(1e18);
    int t; cin>>t;
    solve(0, 0, 0);
    sort(vec.begin(), vec.end());
    while(t--)
    {
        ll l, r; cin>>l>>r;
        auto ansR = upper_bound(vec.begin(), vec.end(), r);
        auto ansL = lower_bound(vec.begin(), vec.end(), l);
        cout<<ansR - ansL<<endll;
    }
 
 
    return 0;
}
