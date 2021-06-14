#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int q; cin>>q;
    map<string, string> mp;
    map<string, bool> exist;
    while(q--)
    {
        string a, b; cin>>a>>b;
        if(!exist[a]) mp[a] = b, exist[b] = true;
        else
        {
            for(auto it : mp)
            {
                if(it.second == a)
                {
                    exist[a] = false;
                    exist[b] = true;
                    mp[it.first] = b;
                }
            }
        }
    }
    cout<<sz(mp)<<endll;
    for(auto it : mp) cout<<it.first<<' '<<it.second<<endll;
 
    return 0;
}
