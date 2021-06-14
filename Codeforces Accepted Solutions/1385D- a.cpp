#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
string t;
int n;
int calc(int s, int e, char c)
{
    int cnt = 0;
    for(int i = s; i <= e; i++) cnt +=(t[i] != c);
    return cnt;
}
 
int solve(int s, int e, int lvl, int sizee)
{
    if(s == e) return !(t[s] == 'a' + lvl);
    int l = calc(s, s + (sizee / 2) - 1, 'a' + lvl);
    int r = calc(s + (sizee / 2), e, 'a' + lvl);
    int ans = oo;
    ans = min(ans, solve(s, s + (sizee / 2) - 1, lvl + 1, sizee / 2) + r);
    ans = min(ans, solve(s + (sizee / 2), e, lvl + 1, sizee / 2) + l);
    return ans;
}
 
int main()
{
    assem99
    int test; cin>>test;
    while(test--)
    {
        cin>>n>>t;
        cout<<solve(0, n - 1, 0, n)<<endl;
    }
 
    return 0;
}
