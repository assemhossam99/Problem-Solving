#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e6 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ans[n + 5];
        memset(ans, 0, sizeof ans);
        vector<pair<pair<int, int>, int>> vec;
        for(int i = 0; i < n; i++)
        {
            int l, r; cin>>l>>r;
            vec.push_back({{l, r}, i});
        }
        bool ok = false;
        sort(vec.begin(), vec.end());
        int end;
        for(int i = 0; i < sz(vec); i++)
        {
            if(ok)
            {
                ans[vec[i].second] = 2;
                continue;
            }
            if(!i)
            {
                end = vec[i].first.second;
                ans[vec[i].second] = 1;
            }
            else
            {
                if(vec[i].first.first > end) ans[vec[i].second] = 2, ok = true;
                else
                {
                    ans[vec[i].second] = 1;
                    end = max(end, vec[i].first.second);
                }
            }
        }
        if(!ok) cout<<-1<<endl;
        else
        {
            for(int i = 0; i < n; i++) cout<<ans[i]<<' ';
            cout<<endl;
        }
    }
 
    return 0;
}
