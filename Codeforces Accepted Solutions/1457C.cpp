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
        int n, p, k; cin>>n>>p>>k;
        int pref[2 * (n + 5)];
        memset(pref, 0, sizeof pref);
        string s; cin>>s;
        for(int i = 1; i <= n; i++)
        {
            pref[i] = (s[i - 1] == '1' ? 0 : 1);
            if(i - k > 0) pref[i] += pref[i - k];
        }
        int x, y; cin>>x>>y;
        ll ans = 1e18;
        for(int i = 1; i <= n; i++)
        {
            int start = i + p - 1, end;
            if(start > n) break;
            int add = (n - start + 1) / k;
            if((n - start + 1) % k == 0) add--;
            end = start + k * add;
            ll curAns = 0;
            if(s[start - 1] == '0') curAns += x;
            curAns += x * (pref[end] - pref[start]);
            curAns += y * (i - 1);
            ans = min(ans, 1LL * curAns);
        }
        cout<<ans<<endll;
    }

    return 0;
}