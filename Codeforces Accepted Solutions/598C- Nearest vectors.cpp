#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int x[N], y[N];
 
 
int main()
{
    Assem99
    int n; cin>>n;
    for(int i = 0; i < n; i++) cin>>x[i]>>y[i];
    vector<pair<ld, int>> vec;
    for(int i = 0; i < n; i++)
    {
        vec.push_back({((atan2(1.0 * y[i], 1.0 * x[i]) * 180.0) / pi) + 360.0, i});
        while(vec.back().first >= 360.0) vec.back().first -= 360.0;
    }
    sort(vec.begin(), vec.end());
    ld minAngle = 360.0;
    pair<int, int> ans = {1, 2};
    for(int i = 0; i < sz(vec) - 1; i++)
    {
        if(vec[i + 1].first - vec[i].first < minAngle)
        {
            ans = {vec[i].second, vec[i + 1].second};
            minAngle = vec[(i + 1) % n].first - vec[i].first;
        }
    }
    if(vec[0].first + 360.0 - vec[n - 1].first < minAngle) ans = {vec[0].second, vec[n - 1].second};
    cout<<ans.first + 1<<' '<<ans.second + 1;
 
    return 0;
}
