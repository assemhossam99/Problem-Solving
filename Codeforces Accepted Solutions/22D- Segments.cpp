#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    vector<pair<int, int>> vec;
    for(int i = 0; i < n; i++)
    {
        int l, r; cin>>l>>r;
        if(l > r) swap(l, r);
        vec.push_back({l, r});
    }
    vector<int> ans;
    sort(vec.begin(), vec.end());
    for(int i = 0; i < sz(vec); i++)
    {
        int start = vec[i].first, end = vec[i].second, nxt = i + 1, cur = vec[i].first;
        set<int> st;
        for(int j = start; j <= end; j++)
        {
            while(vec[nxt].first == j)
            {
                cur = vec[nxt].first;
                st.insert(vec[nxt].second);
                nxt++;
            }
            if(st.find(j) != st.end()) break;
        }
        ans.push_back(cur);
        i = nxt - 1;
    }
    cout<<sz(ans)<<endl;
    for(int it : ans) cout<<it<<' ';
 
    return 0;
}
