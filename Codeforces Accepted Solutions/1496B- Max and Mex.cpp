#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n, k; cin>>n>>k;
        int arr[n + 5], ans = 1, mex = 0;
        set<int> st;
        for(int i = 0; i < n; i++) cin>>arr[i], st.insert(arr[i]);
        sort(arr, arr + n);
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == mex)mex++;
            if(i) ans += (arr[i] != arr[i - 1]);
        }
        if(!k) ans += 0;
        else if(mex == arr[n - 1] + 1) ans += k;
        else
        {
            int x = (mex + arr[n - 1]) / 2;
            x += (mex + arr[n - 1]) % 2;
            if(st.find(x) == st.end()) ans++;
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
