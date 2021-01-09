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


int n, k;
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        bool other = false;
        cin>>n>>k;
        string s; cin>>s;
        vector<int> vec;
        int cnt = 0;
        for(int i = sz(s) - 1; i >= 0; i--)
        {
            if(s[i] == 'L') cnt++;
            else
            {
                other = 1;
                vec.push_back(cnt);
                cnt = 0;
            }
        }
        int start = 0, end = 0;
        if(cnt) vec.push_back(cnt);
        if(s[0] == 'L') start = vec.back(), vec.pop_back();
        if(s[sz(s) - 1] == 'L' and sz(vec)) end = vec[0], vec[0] = 0;
        sort(vec.begin(), vec.end());
        ll ans = 0;
        for(int i = 0; i < sz(s); i++) if(s[i] == 'W') ans += (i and s[i - 1] == 'W')? 2 : 1;
        for(auto it : vec)
        {
            if(!k) break;
            if(it)
            {
                if(k >= it) ans += it * 2, ans++;
                else ans += k * 2;
                k -= min(k, it);
            }
        }
        if(k and end)
        {
            ans += 2 *min(k, end);
            k -= min(k, end);
        }
        if(k and start)
        {
            if(k >= start)
            {
                ans++, k--;
                ans += 2 * min(k, start - 1);
                if(other and k >= start - 1) ans++;
            }
            else if(other) ans += 2 * k;
            else ans += 2 * (k - 1), ans++;
        }
        cout<<ans<<endll;
    }


    return 0;
}