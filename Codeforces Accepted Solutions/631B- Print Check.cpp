#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
map<int, pair<int, int>> r, c;
 
int main()
{
    assem99
    int n, m, k; cin>>n>>m>>k;
    int arr[n + 5][m + 5];
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) arr[i][j] = 0;
    for(int i = 1; i <= k; i++)
    {
        int op, a, x; cin>>op>>a>>x;
        if(op == 1) r[a] = {i, x};
        else c[a] = {i, x};
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(r[i].first > c[j].first) arr[i][j] = r[i].second;
            else arr[i][j] = c[j].second;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++) cout<<arr[i][j]<<' ';
        cout<<endll;
    }
 
    return 0;
}
