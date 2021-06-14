#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int n, m, k, id, ans[N], cnt;
bool vis[1005][1005];
char arr[1005][1005];
map<pair<int, int>, int> mp;
 
bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}
 
void dfs(int x, int y)
{
    vis[x][y] = true;
    mp[{x, y}] = id;
    for(int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if(!vis[xx][yy] && valid(xx, yy) && arr[xx][yy] == '.') dfs(xx, yy);
        else if(valid(xx, yy) && arr[xx][yy] == '*') cnt++;
    }
}
 
int main()
{
    Assem99
    cin>>n>>m>>k;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin>>arr[i][j];
    while(k--)
    {
        int x, y; cin>>x>>y;
        x--, y--;
        if(vis[x][y])
        {
            int idx = mp[{x, y}];
            cout<<ans[idx]<<endl;
        }
        else
        {
            id++;
            cnt = 0;
            dfs(x, y);
            ans[id] = cnt;
            cout<<ans[id]<<endl;
        }
    }
 
    return 0;
}
