#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int n, k, z, arr[N], dp[N][7][2];
ll solve(int idx, int moves, int left, bool moveLeft)
{
    if(moves < 0) return 0;
    if(~dp[moves][left][moveLeft]) return dp[moves][left][moveLeft];
    ll ret = 0;
    ret = max(ret, solve(idx + 1, moves - 1, left, 1) + arr[idx]);
    if(idx and moveLeft and left) ret = max(ret, solve(idx - 1, moves - 1, left - 1, 0) + arr[idx]);
    return dp[moves][left][moveLeft] = ret;
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>n>>k>>z;
        for(int i = 0; i < n; i++) for(int j = 0; j <= 5; j++) for(int k = 0; k < 2; k++) dp[i][j][k] = -1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        cout<<solve(0, k, z, 0)<<endll;
    }

    return 0;
}