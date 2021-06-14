#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    string x, y; cin>>x>>y;
    string ans = "";
    for(int i = 0; i < sz(x); i++)
    {
        if(y[i] == x[i]) ans += x[i];
        else if(y[i] < x[i]) ans += y[i];
        else if(y[i] > x[i]) return cout<<-1, 0;
    }
    cout<<ans;
 
    return 0;
}
