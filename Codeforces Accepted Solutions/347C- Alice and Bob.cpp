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
 
int main()
{
    Assem99
    int n; cin>>n;
    int arr[n + 5], mx = 0, gcd;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mx = max(mx, arr[i]);
        if(i) gcd = __gcd(gcd, arr[i]);
        else gcd = arr[i];
    }
    int all = (mx / gcd) - n;
    if(all & 1) cout<<"Alice";
    else cout<<"Bob";
 
    return 0;
}
