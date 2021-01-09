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

bool vis[20];

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        memset(vis, 0, sizeof vis);
        int n; cin>>n;
        if(n > 45) cout<<"-1"<<endll;
        else if(n < 10) cout<<n<<endll;
        else
        {
            char cur = '9';
            string ans = "";
            while(n)
            {
                if(n >= cur - '0')
                {
                    ans += cur;
                    n -= (cur - '0');
                }
                    cur--;
            }
            reverse(ans.begin(), ans.end());
            cout<<ans<<endll;
        }
    }

    return 0;
}