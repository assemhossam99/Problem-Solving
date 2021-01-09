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
        int n; cin>>n;
        string s; cin>>s;
        if(s[0] == '2' and s[1] == '0' and s[2] == '2' and s[3] == '0') cout<<"YES"<<endll;
        else if(s[0] == '2' and s[1] == '0' and s[2] == '2' and s[n - 1] == '0') cout<<"YES"<<endll;
        else if(s[0] == '2' and s[1] == '0' and s[n - 2] == '2' and s[n - 1] == '0') cout<<"YES"<<endll;
        else if(s[0] == '2' and s[n - 3] == '0' and s[n - 2] == '2' and s[n - 1] == '0') cout<<"YES"<<endll;
        else if(s[n - 4] == '2' and s[n - 3] == '0' and s[n - 2] == '2' and s[n - 1] == '0') cout<<"YES"<<endll;
        else cout<<"NO"<<endll;
    }

    return 0;
}