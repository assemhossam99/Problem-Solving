#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int ans[N];
 
int main()
{
    Assem99
    memset(ans, -1, sizeof ans);
    int n, m; cin>>n>>m;
    int arr[m + 5];
    set<int> st;
    for(int i = 0; i < n; i++) st.insert(i + 1);
    for(int i = 0; i < m; i++) cin>>arr[i];
    for(int i = 1; i < m; i++)
    {
        int steps;
        if(arr[i] > arr[i - 1]) steps = arr[i] - arr[i - 1];
        else steps = (n - arr[i - 1]) + arr[i];
        if(~ans[arr[i - 1]] && steps != ans[arr[i - 1]]) return cout<<-1, 0;
        else
        {
            if(st.find(steps) == st.end())
            {
                if(ans[arr[i - 1]] == -1) return cout<<-1, 0;
                else continue;
            }
            ans[arr[i - 1]] = steps;
            st.erase(steps);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(~ans[i]) cout<<ans[i]<<' ';
        else
        {
            cout<<*st.begin()<<' ';
            st.erase(st.begin());
        }
    }
 
    return 0;
}
