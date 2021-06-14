#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
string s, t, v;
int dp[105][105][105];
vector<int> fail;
int solve(int i, int j, int k)
{
    if(k == sz(v)) return -oo;
    if(i == sz(s) or j == sz(t)) return 0;
    int &ans = dp[i][j][k];
    if(~ans) return ans;
    ans = max(ans, solve(i + 1, j, k));
    ans = max(ans, solve(i, j + 1, k));
    if(s[i] == t[j])
    {
        while(k > 0 and s[i] != v[k]) k = fail[k - 1];
        if(s[i] == v[k]) ans = max(ans, solve(i + 1, j + 1, k + 1) + 1);
        else ans = max(ans, solve(i + 1, j + 1, k) + 1);
    }
    return ans;
}
 
void build(int i, int j, int k)
{
    if(i == sz(s) or j == sz(t)) return;
    if(solve(i + 1, j, k) == dp[i][j][k])
    {
        build(i + 1, j, k);
        return;
    }
    if(solve(i, j + 1, k) == dp[i][j][k])
    {
        build(i, j + 1, k);
        return;
    }
    if(s[i] == t[j])
    {
        cout<<s[i];
        while(k > 0 and s[i] != v[k]) k = fail[k - 1];
        if(s[i] == v[k]) build(i + 1, j + 1, k + 1);
        else build(i + 1, j + 1, k);
    }
}
 
vector<int> build_fail(string &pat) {
    vector<int> fail(pat.size(), 0);
    fail[0] = 0;
    for (int i = 1; i < pat.size(); i++) {
        int len = fail[i - 1];
        while (len > 0 && pat[len] != pat[i]) {
            len = fail[len - 1];
        }
        if (pat[len] == pat[i]) ++len;
        fail[i] = len;
    }
    return fail;
}
 
int main()
{
    Assem99
    cin>>s>>t>>v;
    fail = build_fail(v);
    memset(dp, -1, sizeof dp);
    int ans = solve(0, 0, 0);
    if(!ans) cout<<0;
    else build(0, 0, 0);
 
    return 0;
}
