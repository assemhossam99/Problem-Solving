#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

ll calc(ll b, ll h)
{
    return b * h;
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        vector<int> row[N][20], col[N][15];
        set<int> r[N], c[N];
        int n; cin>>n;
        char arr[n + 5][n + 5];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
                row[i][arr[i][j] - '0'].push_back(j);
                col[j][arr[i][j] - '0'].push_back(i);
                r[arr[i][j] - '0'].insert(i);
                c[arr[i][j] - '0'].insert(j);
            }
        for (int k = 0; k < 10; k++)
        {
            ll ans = 0;
            for(int i = 0; i < n; i++)
            {
                for(auto it : row[i][k])
                {
                    ll base = max(abs(row[i][k][0] - it), abs(row[i][k].back() - it));
                    ll height = max(i, (n - 1) - i);
                    ans = max(ans, calc(base, height));

                    base = max(n - 1 - it, it);
                    height = max(i - *r[k].begin(), *prev(r[k].end()) - i);
                    ans = max(ans, calc(base, height));
                    //if(k == 9) cout<<i<<' '<<' '<<it<<' '<<ans<<endll;
                }
                for(auto it : col[i][k])
                {
                    ll base = max(abs(col[i][k][0] - it), abs(col[i][k].back() - it));
                    ll height = max(i, (n - 1) - i);
                    ans = max(ans, calc(base, height));

                    base = max(n - 1 - it, it);
                    height = max(i - *c[k].begin(), *prev(c[k].end()) - i);
                    ans = max(ans, calc(base, height));
                }
            }
            cout<<ans<<' ';
        }
        cout<<endll;
    }

    return 0;
}