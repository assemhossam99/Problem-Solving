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
    int n; cin>>n;
    set<pair<int, int>> st;
    for(int i = 0; i <= n; i++)
    {
        st.insert({i, i});
        st.insert({i + 1, i});
        st.insert({i, i + 1});
        st.insert({i + 1, i + 1});
    }
    cout<<sz(st)<<endll;
    for(auto it : st) cout<<it.first<<' '<<it.second<<endll;


    return 0;
}