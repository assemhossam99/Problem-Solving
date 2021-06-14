#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
int main()
{
    Assem99
    File
    ordered_set g[4];
    int n; cin>>n;
    int x, a, b, c; cin>>x>>a>>b>>c;
    map<int, string> mp;
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        string s; cin>>s;
        int p; cin>>p;
        mp[p] = s;
        vec.push_back(p);
    }
    sort(vec.rbegin(), vec.rend());
    int cur = 0, mx = n / 4;
    for(int i = 0; i < sz(vec); i++)
    {
        if(sz(g[cur]) == mx) cur++;
        g[cur].insert(vec[i]);
    }
    char cc = 'A';
    for(int i = 0; i < mx; i++)
    {
        cout<<"Group "<<cc<<":"<<endl;
        for(int j = 0; j < 4; j++)
        {
            x = (x * a + b) % c;
            int idx = x % sz(g[j]);
            idx = sz(g[j]) - idx - 1;
            auto it = g[j].find_by_order(idx);
            cout<<mp[*it]<<endl;
            g[j].erase(it);
        }
        cc++;
    }
 
    return 0;
}
