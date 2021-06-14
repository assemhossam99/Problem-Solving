#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll out[N], in[N], x[N], y[N];
 
int main()
{
    assem99
    ll n, h; cin>>n>>h;
    for(int i = 1; i <= n; i++)
    {
        cin>>x[i]>>y[i];
        in[i] = y[i] - x[i];
        if(i > 1) out[i - 1] = x[i] - y[i - 1];
    }
    if(n == 1) return cout<<h + y[1] - x[1], 0;
    ll ans = 0;
    for(int i = 1; i <= n; i++) in[i] += in[i - 1], out[i] += out[i - 1];
    int p1 = 0, p2 = 1;
    while(p1 <= p2)
    {
        int tmph = h;
        if(p2 == n)
        {
            p1++;
            continue;
        }
        if(out[p2] - out[p1] <= h)
        {
            ll cur = out[p2] - out[p1];
            tmph -= cur;
            cur += in[p2] - in[p1];
            if(tmph) cur += tmph + (in[p2 + 1] - in[p2]);
            ans = max(ans, cur);
            if(p2 < n - 1) p2++;
            else p1++;
        }
        else p1++;
    }
    cout<<ans;
 
    return 0;
}
