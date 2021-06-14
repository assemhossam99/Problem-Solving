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
 
int x[2005], y[2005];
ld dist(ld x1, ld y1, ld x2, ld y2)
{
    ld ret = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    return ret;
}
 
int main()
{
    //Assem99
    int n, x1, y1, x2, y2; cin>>n>>x1>>y1>>x2>>y2;
    ld r1 = 0, r2 = 0, ans = 1e18;
    for(int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
        r1 = max(r1, dist((ld)x1, (ld)y1, (ld)x[i], (ld)y[i]));
    }
    ans = r1;
    vector<pair<ld, int>> vec;
    for(int i = 0; i < n; i++)
    {
        vec.push_back({dist((ld) x2, (ld) y2, (ld) x[i], (ld) y[i]), i});
    }
    pair<ld, int> mx;
    sort(vec.begin(), vec.end());
    for(auto it : vec)
    {
        r2 = it.first;
        x[it.second] = y[it.second] = -oo;
        ld cur = 0;
        for(int i = 0; i < n; i++)
        {
            if(x[i] == -oo) continue;
            cur = max(cur, dist((ld)x1, (ld)y1, (ld)x[i], (ld)y[i]));
        }
        r1 = cur;
        ans = min(ans, r1 + r2);
    }
    cout<<(ll)ans;
 
    return 0;
}
