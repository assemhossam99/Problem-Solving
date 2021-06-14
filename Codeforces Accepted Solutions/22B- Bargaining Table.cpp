#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int n, m, ans;
char arr[30][30];
int solve(int x1, int y1, int x2, int y2)
{
    for(int i = x1; i <= x2; i++)
    {
        for(int j = y1; j <= y2; j++)
        {
            if(arr[i][j] == '1') return 0;
        }
    }
    return (abs(x1 - x2) + 1 + abs(y1 - y2) + 1) * 2;
}
 
int main()
{
    Assem99
    cin>>n>>m;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin>>arr[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int ii = i; ii < n; ii++)
            {
                for(int jj = j; jj < m; jj++)
                {
                    ans = max(ans, solve(i, j, ii, jj));
                }
            }
        }
    }
    cout<<ans;
 
    return 0;
}
