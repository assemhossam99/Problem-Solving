#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int arr[505][505];
        int n, m; cin>>n>>m;
        for(int i = 1; i <= n; i++)
        {
            arr[i][0] = 0;
            for(int j = 1; j <= m; j++)
            {
                char c; cin>>c;
                arr[i][j] = (c == '*');
                arr[i][j] += arr[i][j - 1];
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    if(i + k > n or j + k > m or j - k < 1) break;
                    else if(arr[i + k][j + k] - arr[i + k][j - k - 1] == 2 * k + 1) ans++;
                    else break;
                }
            }
        }
        cout<<ans<<endll;
    }

    return 0;
}