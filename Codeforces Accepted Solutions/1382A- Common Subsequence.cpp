#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m;
        int freq[N];
        memset(freq, 0, sizeof freq);
        int ans = -1;
        cin>>n>>m;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            freq[a]++;
        }
        for(int i = 0; i < m; i++)
        {
            int a; cin>>a;
            if(freq[a]) ans = a;
        }
        if(~ans) cout<<"YES"<<endll<<"1 "<<ans<<endll;
        else cout<<"NO"<<endll;
    }
 
    return 0;
}
