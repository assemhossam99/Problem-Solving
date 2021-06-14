#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int arr[n + 5];
        vector<int> vec[m + 5];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            vec[arr[i] % m].push_back(i);
        }
        int ans = 0;
        if(sz(vec[0])) ans++, vec[0].clear();
        for(int i = 1; m - i > i; i++)
        {
            if(sz(vec[i]) && sz(vec[m - i]))
            {
                ans++;
                if(sz(vec[i]) > sz(vec[m - i])) vec[i].pop_back();
                else if(sz(vec[i]) < sz(vec[m - i])) vec[m - i].pop_back();
            }
            while(sz(vec[i]) && sz(vec[m - i]))
            {
                vec[i].pop_back();
                vec[m - i].pop_back();
            }
            if(sz(vec[i])) ans += sz(vec[i]), vec[i].clear();
            if(sz(vec[m - i])) ans += sz(vec[m - i]), vec[m - i].clear();
            //cout<<ans<<endl;
        }
        if(m % 2 == 0 && sz(vec[m / 2])) ans++;
        cout<<ans<<endl;
    }
 
    return 0;
}
