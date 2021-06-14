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
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
int records[N], flag[N];
 
int main()
{
    Assem99
    memset(records, -1, sizeof records);
    int n; cin>>n;
    int arr[n + 5], mx = 0,total = 0, cnt = 0;
    ordered_set st;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
        int less = st.order_of_key(arr[i]);
        if(less == i - 1 && i > 1)
        {
            records[i] = mx; // hyb2a record lw shelt al mx
            cnt++;
        }
        else if(less == i && i) flag[arr[i]] = 1;
        mx = max(mx, arr[i]);
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(records[i] != -1) mp[records[i]]++;
    }
    mx = 0;
    int ans = 1e9;
    for(auto it : mp)
    {
        mx = max(mx, it.second - flag[it.first]);
 
    }
    for(auto it : mp)
    {
        if(it.second - flag[it.first] == mx)
        {
            if(ans > it.first) ans = it.first;
        }
    }
    if(!mx)
    {
        for(int i = 1; i < n; i++) if(!flag[arr[i]]) ans = min(ans, arr[i]);
        if(ans == 1e9) ans = arr[0];
    }
    cout<<ans;
 
    return 0;
}
