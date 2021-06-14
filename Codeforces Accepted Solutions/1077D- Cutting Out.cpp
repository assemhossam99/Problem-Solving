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
 
int freq[N], arr[N];
 
int main()
{
    Assem99
    int n, k; cin>>n>>k;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    set<pair<pair<int, int>, pair<int, int>>> st;
    for(int i = 0; i < N; i++)
    {
        if(freq[i]) st.insert({{freq[i], freq[i]}, {i, 2}});
    }
    vector<int> vec;
    while(sz(vec) < k)
    {
        auto it = st.end();
        it--;
        vec.push_back(it->second.first);
        int num = it->second.first, f = it->first.second, rep = it->second.second, ff = it->first.second;
        st.erase(it);
        f = ff / rep;
        st.insert({{f, ff}, {num, rep + 1}});
    }
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
