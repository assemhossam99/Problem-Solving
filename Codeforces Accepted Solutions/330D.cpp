#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

bool vis[N][N];

int main()
{
    assem99
    int n, m; cin>>n>>m;
    char arr[n + 5][m + 5];
    pair<pair<int, int>, int> start;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'E')
                start.first.first = i, start.first.second = j, start.second = 0;
        }
    queue<pair<pair<int, int>, int>> q;
    int ans = 0;
    q.push(start);
    vis[start.first.first][start.first.second] = true;
    int lvl = oo;
    while (sz(q))
    {
        pair<pair<int, int>, int> cur = q.front();
        q.pop();
        if(cur.second <= lvl and arr[cur.first.first][cur.first.second] != 'T' and arr[cur.first.first][cur.first.second] != 'E' and arr[cur.first.first][cur.first.second] != 'S')
            ans += (arr[cur.first.first][cur.first.second] - '0');
        else if(arr[cur.first.first][cur.first.second] == 'S')
            lvl = cur.second;
        for(int i = 0; i < 4 and cur.second < lvl; i++)
        {
            if(cur.first.first + dx[i] < n and cur.first.first + dx[i] >= 0 and cur.first.second + dy[i] >= 0 and cur.first.second + dy[i] < m and
            !vis[cur.first.first + dx[i]][cur.first.second + dy[i]] and arr[cur.first.first + dx[i]][cur.first.second + dy[i]] != 'T')
            {
                q.push({{cur.first.first + dx[i], cur.first.second + dy[i]}, cur.second + 1});
                vis[cur.first.first + dx[i]][cur.first.second + dy[i]] = true;
            }
        }
    }
    cout<<ans;

    return 0;
}