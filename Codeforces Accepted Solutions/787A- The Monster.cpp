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
    ll a, b, c, d; cin>>b>>a>>d>>c;
    set<ll> x, y;
    for(int i = 0; i <= 1e3; i++)
    {
        x.insert(a + i * b);
        y.insert(c + i * d);
    }
    for(auto it : x)
    {
        if(y.find(it) != y.end()) return cout<<it, 0;
    }
    cout<<-1;
 
    return 0;
}
