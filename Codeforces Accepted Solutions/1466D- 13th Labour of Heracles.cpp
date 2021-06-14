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
 
vector<int> g[N];
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        ll sum = 0;
        for(int i = 1; i <= n; i++) cin>>arr[i], sum += arr[i];
        for(int i = 0; i <= n; i++) g[i].clear();
        for(int i = 0; i < n - 1; i++)
        {
            int u, v; cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> vec;
        for(int i = 1; i <= n; i++)
        {
            if(sz(g[i]) > 1)
            {
                int x = sz(g[i]) - 1;
                while(x--) vec.push_back(arr[i]);
            }
        }
        sort(vec.rbegin(), vec.rend());
        cout<<sum<<' ';
        for(auto it : vec)
        {
            sum += it;
            cout<<sum<<' ';
        }
        cout<<endl;
    }
 
    return 0;
}
