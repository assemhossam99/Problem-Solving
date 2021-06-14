#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ld dp[1005][1005];
void memset(ld * arr, int n)
{
    ld *ptr = arr;
    while(n--)
    {
        *ptr = -1;
        ptr++;
    }
}
 
ld solve(int w, int b)
{
    int total = w + b;
    if(w < 0 or b < 0 or !total) return 0;
    if(dp[w][b] != - 1) return dp[w][b];
    ld ans = 0;
    ans += (ld) w / total;
    if(total > 2)
    {
        ans += ((ld) b / total) * ((ld) (b - 1) / (total - 1)) * ((ld) w / (total - 2)) * solve(w - 1, b - 2)
                + ((ld) b / total) * ((ld) (b - 1) / (total - 1)) * ((ld) (b - 2) / (total - 2)) * solve(w, b - 3);
    }
    return dp[w][b] = ans;
}
 
int main()
{
    assem99
    int w, b; cin>>w>>b;
    memset(&(dp[0][0]), N * N);
    cout<<fixed<<setprecision(10)<<solve(w, b);
    return 0;
}
