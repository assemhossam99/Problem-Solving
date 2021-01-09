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
        vector<char> e, o;
        for(auto it : s)
        {
            if((it - '0') % 2) o.push_back(it);
            else e.push_back(it);
        }
        int i = 0, j = 0;
        while(i < sz(e) or j < sz(o))
        {
            if(i < sz(e) and j < sz(o))
            {
                if(e[i] < o[j]) cout<<e[i], i++;
                else cout<<o[j], j++;
            }
            else if(j == sz(o)) cout<<e[i], i++;
            else cout<<o[j], j++;
        }
        cout<<endll;
    }

    return 0;
}