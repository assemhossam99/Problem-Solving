#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m, r, c; cin>>n>>m>>r>>c;
        int ans = 0;
        r--, c--;
        ans = max(ans, r + c);
        ans = max(ans, r + ((m - 1) - c));
        ans = max(ans, ((n - 1) - r) + c);
        ans = max(ans, ((n - 1) - r) + ((m - 1) - c));
        cout<<ans<<endll;
    }

    return 0;
}