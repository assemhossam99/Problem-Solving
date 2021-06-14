#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 31, p2 = 37;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    set<pair<ll, int>> st;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        st.insert({a, i});
    }
    vector<pair<int, ll>> vec;
    while(sz(st) > 1)
    {
        auto it1 = st.begin(), it2 = st.begin();
        it2++;
        if(it1->first == it2->first)
        {
            ll a = it2->first + it2->first, b = it2->second;
            st.insert({a, b});
            st.erase(it1);
            st.erase(it2);
        }
        else
        {
            vec.push_back({it1->second, it1->first});
            st.erase(it1);
        }
    }
    vec.push_back({st.begin()->second ,st.begin()->first});
    sort(vec.begin(), vec.end());
    cout<<sz(vec)<<endll;
    for(auto it : vec) cout<<it.second<<' ';
 
    return 0;
}
