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
 
int main()
{
    Assem99
    ll n, m, v; cin>>n>>m>>v;
    if(m < n - 1 || ((n - 1) * (n - 2)) / 2 < m - 1) return cout<<-1, 0;
    vector<pair<int, int>> vec;
    int out;
    if(v == 1) vec.push_back({2, 1}), out = 2;
    else vec.push_back({1, v}), out = 1;
    m--;
    for(int i = 1; i <= n; i++)
    {
        if(i == out || i == v) continue;
        vec.push_back({v, i});
        m--;
    }
    for(int i = 1; i <= n && m; i++)
    {
        for(int j = i + 1; j <= n && m; j++)
        {
            if(i == out || i == v || j == out || j == v) continue;
            vec.push_back({i, j});
            m--;
        }
    }
    for(auto it : vec) cout<<it.first<<' '<<it.second<<endl;
 
    return 0;
}
