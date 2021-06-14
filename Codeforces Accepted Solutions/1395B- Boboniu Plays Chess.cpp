#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n, m , x, y; cin>>n>>m>>x>>y; x--, y--;
    set<pair<int, int>> st;
    vector<pair<int, int>> vec;
    st.insert({x, y});
    vec.push_back({x, y});
 
    while(x >= 0)
    {
        if(st.find({x, y}) == st.end())
        {
            st.insert({x, y});
            vec.push_back({x, y});
        }
        x--;
    }
    x = 0;
    while(y >= 0)
    {
        if(st.find({x, y}) == st.end())
        {
            st.insert({x, y});
            vec.push_back({x, y});
        }
        y--;
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < m; j++)
            {
                if(st.find({i, j}) == st.end())
                {
                    vec.push_back({i, j});
                }
            }
        }
        else
        {
            for(int j = m - 1; j >= 0; j--)
            {
                if(st.find({i, j}) == st.end())
                {
                    vec.push_back({i, j});
                }
            }
        }
    }
    for(auto it : vec) cout<<it.first + 1<<' '<<it.second + 1<<endll;
 
    return 0;
}
