#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
vector<ll> vec[N];
 
int main()
{
    Assem99
    int n, m; cin>>n>>m;
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin>>a>>b;
        st.insert(a);
        vec[a].push_back((ll)b);
    }
    int mxLen = 0;
    for(int i = 1; i <= m; i++)
    {
        if(sz(vec[i]))
        {
            mxLen = max(mxLen, sz(vec[i]));
            sort(vec[i].rbegin(), vec[i].rend());
            for(int j = 1; j < sz(vec[i]); j++) vec[i][j] = vec[i][j] + vec[i][j - 1];
        }
    }
    ll ans = 0;
    for(int i = 0; i < mxLen; i++)
    {
        ll cur = 0;
        vector<int> v;
        for(auto it : st)
        {
            if(i + 1 <= sz(vec[it]) && vec[it][i] > 0)
            {
                cur += vec[it][i];
            }
            else v.push_back(it);
        }
        ans = max(ans, cur);
        for(auto it : v) st.erase(it);
    }
    cout<<ans;
 
 
    return 0;
}
