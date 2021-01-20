#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    Assem99
    int n; cin>>n;
    int arr[n + 5], x, y, mx = 0;
    set<int> st;
    for(int i = 0; i < n; i++) cin>>arr[i], mx = max(mx, arr[i]);
    for(int i = 1; i < n; i++)
    {
        if(abs(arr[i] - arr[i - 1]) > 1) st.insert(abs(arr[i] - arr[i - 1]));
    }
    if(sz(st) > 1) return cout<<"NO", 0;
    st.insert(1e9);
    x = *st.begin();
    y = (mx - 1) / x, y++;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i - 1]) return cout<<"NO", 0;
        if(abs(arr[i] - arr[i - 1]) != 1 and abs(arr[i] - arr[i - 1]) != x) return cout<<"NO", 0;
        if(arr[i - 1] % x == 0 and arr[i] - arr[i - 1] == 1 and x != 1) return cout<<"NO", 0;
        if(arr[i - 1] % x == 1 and arr[i - 1] - arr[i] == 1 and x != 1) return cout<<"NO", 0;
    }
    cout<<"YES\n"<<y<<' '<<x;
    return 0;
}