#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int ans = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0 ; j < 10; j++)
            {
                if(i == j) continue;
                int last = j, cnt = 0;
                for(int id = 0; id < sz(s); id++)
                {
                    if(last == j and s[id] - '0' == i) cnt++, last = i;
                    else if(last == i and s[id] - '0' == j) cnt++, last = j;
                }
                if(last == i) cnt--;
                ans = max(ans, cnt);
            }
        }
        for(int i = 0; i < 10; i++)
        {
            int cnt = 0;
            for(int j = 0; j < sz(s); j++) cnt += (s[j] - '0' == i);
            ans = max(ans, cnt);
        }
        cout<<sz(s) - ans<<endll;
    }
 
 
    return 0;
}
