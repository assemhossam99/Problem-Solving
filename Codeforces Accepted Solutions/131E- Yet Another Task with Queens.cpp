#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e5 + 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
vector<int> row[N], col[N], d1[N], d2[N];
int ans[10];
 
int solve(vector<int> &vec, int v)
{
    return ((vec[0] < v) + (vec.back() > v));
}
 
int main()
{
    //Assem99
    int n, m; cin>>n>>m;
    int x[m + 5], y[m + 5];
    int offset = 2e5;
    for(int i = 0; i < m; i++)
    {
        cin>>x[i]>>y[i];
        row[x[i]].push_back(y[i]);
        col[y[i]].push_back(x[i]);
        d1[x[i] + y[i]].push_back(x[i]);
        d2[(x[i] - y[i]) + offset].push_back(x[i]);
    }
    for(int i = 0; i < N; i++)
    {
        if(sz(row[i])) sort(row[i].begin(), row[i].end());
        if(sz(col[i])) sort(col[i].begin(), col[i].end());
        if(sz(d1[i])) sort(d1[i].begin(), d1[i].end());
        if(sz(d2[i])) sort(d2[i].begin(), d2[i].end());
    }
    for(int i = 0; i < m; i++)
    {
        int cur = solve(row[x[i]], y[i]) +
                  solve(col[y[i]], x[i]) +
                  solve(d1[x[i] + y[i]], x[i]) +
                  solve(d2[(x[i] - y[i]) + offset], x[i]);
        ans[cur]++;
    }
    for(int i = 0; i <= 8; i++) cout<<ans[i]<<' ';
 
    return 0;
}
