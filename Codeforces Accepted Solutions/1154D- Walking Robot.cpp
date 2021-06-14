#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e6 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n, b, a; cin>>n>>b>>a;
    int arr[n + 5], ans = 0, mx = a;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < n; i++)
    {
        if(!arr[i])
        {
            if(a) a--, ans++;
            else if(b) b--, ans++;
            else break;
        }
        else
        {
            if(b && a < mx) ans++, b--, a++;
            else if(a || (b && a == mx)) a--, ans++;
            else break;
        }
    }
    cout<<ans;
 
    return 0;
}
