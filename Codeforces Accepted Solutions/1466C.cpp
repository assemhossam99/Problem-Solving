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

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        char add [5] = {'#', '$', '%', '^', '&'};
        int id = 0;
        string s; cin>>s;
        if(sz(s) == 1) cout<<0<<endll;
        else if(sz(s) == 2)
        {
            if(s[0] == s[1]) cout<<1<<endll;
            else cout<<0<<endll;
        }
        else
        {
            int ans = 0;
            for(int i = 0; i <= sz(s) - 3; i++)
            {
                if(s[i] == s[i + 1] and s[i + 1] == s[i + 2])
                {
                    ans += 2;
                    s[i + 1] = add[id % 5];
                    id++;
                    s[i + 2] = add[id % 5];
                    id++;
                }
                else if(s[i] == s[i + 2])
                {
                    ans++;
                    s[i + 2] = add[id % 5];
                    id++;
                }
                else if(s[i + 1] == s[i + 2])
                {
                    ans++;
                    s[i + 2] = add[id % 5];
                    id++;
                }
                else if(s[i] == s[i + 1])
                {
                    ans++;
                    s[i + 1] = add[id % 5];
                    id++;
                }
            }
            cout<<ans<<endll;
        }
    }

    return 0;
}