#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    set<ii> st;
    vii vec;
    int n, k; cin>>n>>k;
    rep(i, 0, n)
    {
        int a, b; cin>>a>>b;
        vec.push_back(ii(b, a));
    }
    ll sum = 0, ans = 0;
    sort(vec.rbegin(), vec.rend());
    rep(i, 0, n)
    {
        sum += vec[i].S;
        st.insert(ii(vec[i].S, i));
        if(sz(st) > k)
        {
            auto it = st.begin();
            sum -= it->F;
            st.erase(it);
        }
        ans = max(ans, sum * vec[i].F);
    }
    cout<<ans;
 
 return 0;
}
