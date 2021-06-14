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
    int n, r; cin>>n>>r;
    vector<pair<int, int>> inc, dec;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin>>a>>b;
        if(b < 0) dec.emplace_back(a + b, a);
        else inc.emplace_back(a, b);
    }
    sort(inc.begin(), inc.end());
    sort(dec.rbegin(), dec.rend());
    for(auto it : inc)
    {
        if(r < it.first) return cout<<"NO", 0;
        r += it.second;
    }
    for(auto it : dec)
    {
        if(r < it.second) return cout<<"NO", 0;
        r += it.first - it.second;
        if(r < 0) return cout<<"NO", 0;
    }
    cout<<"YES";
    return 0;
}
