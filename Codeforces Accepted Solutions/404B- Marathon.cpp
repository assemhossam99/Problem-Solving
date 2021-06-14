#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 4e7 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    ld a, d, n; cin>>a>>d>>n;
    ld cur = 0;
    while(d >= 4 * a) d -= 4 * a;
    for(int i = 0; i < n; i++)
    {
        cur += d;
        while(cur >= 4 * a) cur -= 4 * a;
        if(cur <= a) cout<<fixed<<setprecision(10)<<cur<<' '<<0.0000000000<<endll;
        else if(cur <= 2.0 * a) cout<<fixed<<setprecision(10)<<a<<' '<<cur - a<<endll;
        else if(cur <= 3.0 * a) cout<<fixed<<setprecision(10)<<3 * a - cur<<' '<<a<<endll;
        else cout<<fixed<<setprecision(10)<<0.0000000000<<' '<<4 * a - cur<<endll;
    }
 
    return 0;
}
