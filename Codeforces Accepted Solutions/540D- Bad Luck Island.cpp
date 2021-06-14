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
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
ld dp[105][105][105];
ld solve(int a, int b, int c) // a -> b, b -> c, c -> a
{
    if(!a) return 0;
    if(a && !b && !c) return 1;
    if(dp[a][b][c] > -1) return dp[a][b][c];
    ld ans = 0, base = (a * b) + (b * c) + (a * c);
    if(a && b) ans += solve(a, b - 1, c) * ((ld)(a * b) / base);
    if(b && c) ans += solve(a, b, c - 1) * ((ld)(b * c) / base);
    if(a && c) ans += solve(a - 1, b, c) * ((ld)(a * c) / base);
    return dp[a][b][c] = ans;
}
 
void MemeSet()
{
    for(int i = 0; i < 105; i++)
        for(int j = 0; j < 105; j++)
            for(int k = 0; k < 105; k++)
                dp[i][j][k] = -1;
}
 
int main()
{
    Assem99
    MemeSet();
    int r, s, p;  cin>>r>>s>>p;
    cout << fixed<<setprecision(9);
    cout<<solve(r, s, p)<<' '<<solve(s, p, r)<<' '<<solve(p, r, s);
    return 0;
}
