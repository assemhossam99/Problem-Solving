#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int dp[2][505][505];
 
int main()
{
    assem99
    int n, m, b, mod; cin>>n>>m>>b>>mod;
    int arr[n + 5];
    for(int i = 1; i <= n; i++) cin>>arr[i];
    for(int i = 0; i <= n; i++) for(int j = 0; j <= b; j++) dp[i % 2][0][j] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            for(int k = 0; k <= b; k++)
            {
                dp[i % 2][j][k] = dp[(i - 1) % 2][j][k];
                if(arr[i] <= k) dp[i % 2][j][k] += dp[(i % 2)][j - 1][k - arr[i]]; dp[i % 2][j][k] %= mod;
            }
        }
    }
    cout<<dp[n % 2][m][b];
 
    return 0;
}
