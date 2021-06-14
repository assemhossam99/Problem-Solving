#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e8, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int m, n; cin>>m>>n;
    ld ans = 0;
    for(int i = 1; i <= m; i++)
    {
        ld cur = (pow((ld) i / m, n) - pow((ld)(i - 1) / m, n));
        ans += i * cur;
    }
    cout<<fixed<<setprecision(12)<<ans;
 
    return 0;
}
