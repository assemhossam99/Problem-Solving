#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e8, N = 5e2 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
vector<ld> vec;
void solve(ld n)
{
    if(n > 1e10) return;
    vec.push_back(n);
    solve(n * 10 + 7);
    solve(n * 10 + 4);
}
 
int main()
{
    assem99
    solve(0);
    sort(vec.begin(), vec.end());
    vec.push_back(1e18);
    ld pl, pr, vl, vr, k; cin>>pl>>pr>>vl>>vr>>k;
    ld ans = 0;
    for(int i = 1; i + k < sz(vec); i++)
    {
        ld a = max((ld)0, min(vec[i], pr) - max(vec[i - 1] + 1, pl) + 1);
        ld b = max((ld)0, min(vec[i + k] - 1, vr) - max(vl, vec[i + k - 1]) + 1);
        ans += a * b;
        a = max((ld)0, min(vec[i], vr) - max(vec[i - 1] + 1, vl) + 1);
        b = max((ld)0, min(vec[i + k] - 1, pr) - max(pl, vec[i + k - 1]) + 1);
        ans += a * b;
        ans -= (k == 1 and pl <= vec[i] and vl <= vec[i] and vec[i] <= vr and vec[i] <= pr);
    }
    ld total = (pr - pl + 1) * (vr - vl + 1);
    cout<< fixed<<setprecision(12)<<ans/ total;
 
    return 0;
}
