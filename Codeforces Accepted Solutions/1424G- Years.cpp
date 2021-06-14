#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    set<int> st;
    int n; cin>>n;
    map<int, int> l, d;
    for(int i = 0; i < n; i++)
    {
        int x, y; cin>>x>>y;
        st.insert(x);
        st.insert(y);
        l[x]++;
        d[y]++;
    }
    int alive = 0, year = 0, mx = 0;
    for(auto it : st)
    {
        alive += l[it];
        alive -= d[it];
        if(alive > mx)
        {
            mx = alive;
            year = it;
        }
    }
    cout<<year<<' '<<mx;
 
    return 0;
}
