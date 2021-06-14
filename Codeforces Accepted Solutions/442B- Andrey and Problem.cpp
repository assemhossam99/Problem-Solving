#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n; cin>>n;
    ld p[n + 5], ans = 0;
    for(int i = 0; i < n; i++) cin>>p[i];
    sort(p, p + n);
    for(int i = 0; i < n; i++)
    {
        ld take = p[i], leave = 1 - p[i];
        for(int j = i + 1; j < n; j++)
        {
            take = leave * p[j] + take * (1 - p[j]);
            leave *= (1 - p[j]);
        }
        ans = max(ans, take);
    }
    cout<<fixed<<setprecision(12)<<ans;
 
    return 0;
}
