#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int arr[N], n, q, k, pref[N];
 
int solveLeft(int i)
{
    return arr[i + 1] - 2;
}
 
int solveRight(int i)
{
    return k - arr[i - 1] - 1;
}
 
int main()
{
    Assem99
    cin>>n>>q>>k;
    for(int i = 1; i <= n; i++) cin>>arr[i];
    for(int i = 2; i < n; i++) pref[i] = arr[i + 1] - arr[i - 1] - 2;
    for(int i = 0; i < n; i++) pref[i] += pref[i - 1];
    while(q--)
    {
        int l, r; cin>>l>>r;
        if(l == r) cout<<k - 1<<endll;
        else
        {
            int ans = solveRight(r) + solveLeft(l);
            if(r - 1 >= l + 1) ans += pref[r - 1] - pref[l];
            cout<<ans<<endll;
        }
    }
 
    return 0;
}
