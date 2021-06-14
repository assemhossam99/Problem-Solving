#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e3+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
ll dp[N][N];
vector<int> ones, zeroes;
 
ll solve(int z, int o)
{
    if(o != ones.size() && z == zeroes.size()) return oo;
    if(o == sz(ones)) return 0;
    if(~dp[z][o]) return dp[z][o];
    ll ret = oo;
    ret = min(ret, solve(z + 1, o));
    ret = min(ret, solve(z + 1, o + 1) + abs(zeroes[z] - ones[o]));
    return dp[z][o] = ret;
}
 
int main()
{
    Assem99
    memset(dp, -1, sizeof dp);
    int n; cin>>n;
    int arr[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(!arr[i]) zeroes.push_back(i);
        else ones.push_back(i);
    }
    cout<<solve(0, 0);
 
 
    return 0;
}
