#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
 
int main()
{
    Assem99
    ld d, h, v, e; cin>>d>>h>>v>>e;
    ld inc = pi * 0.5 * d * 0.5 * d * e;
    if(inc >= v) return cout<<"NO", 0;
    cout<<"YES\n";
    ld vol = h * pi * 0.5 * d * 0.5 * d, dec = v - inc;
    cout<<fixed<<setprecision(9)<<vol / dec;
 
    return 0;
}
