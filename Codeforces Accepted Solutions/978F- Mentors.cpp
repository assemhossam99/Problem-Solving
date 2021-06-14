#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
map<int, set<int>> mp;
 
int main()
{
    assem99
    vii vec;
    int n, m; cin>>n>>m;
    int arr[n + 1];
    rep(i, 0, n)
    {
        int a; cin>>a;
        vec.push_back(ii(a, i));
    }
    rep(i, 0, m)
    {
        int x, y; cin>>x>>y; x--, y--;
        if(vec[x] .first> vec[y].first) mp[x].insert(y);
        else if(vec[y].first > vec[x].first) mp[y].insert(x);
    }
    sort(vec.begin(), vec.end());
    rep(i, 0, n)
    {
        int start = 0, end = sz(vec) - 1, mid, ans = 0;
        while(start <= end)
        {
            mid = (start + end) / 2;
            if(vec[mid].first < vec[i].first) start = mid + 1;
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        arr[vec[i].second] = ans;
        arr[vec[i].second] -= sz(mp[vec[i].second]);
    }
    rep(i, 0, n) cout<<arr[i]<<' ';
 
    return 0;
}
