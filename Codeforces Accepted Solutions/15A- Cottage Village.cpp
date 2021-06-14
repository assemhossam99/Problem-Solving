#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n, t; cin>>n>>t;
    vector<pair<ld, ld>> vec;
    for(int i = 0 ; i < n; i++)
    {
        ld x, a; cin>>x>>a;
        vec.push_back({x, a});
    }
    sort(vec.begin(), vec.end());
    int ans = 2;
    for(int i = 0; i < n - 1; i++)
    {
        ld dist = (vec[i + 1].first - vec[i + 1].second / 2.0) - (vec[i].first + vec[i].second / 2.0);
        ans += (dist < t)? 0 : (dist == t)? 1 : 2;
    }
    cout<<ans;
 
    return 0;
}
