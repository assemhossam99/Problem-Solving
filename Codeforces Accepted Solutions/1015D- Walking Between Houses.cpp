#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    ll n, k, s; cin>>n>>k>>s;
    if(k * (n - 1) < s or k > s) return cout<<"NO", 0;
    else
    {
        cout<<"YES"<<endll;
        int cur = 1;
        while(k)
        {
            ll dist = min(n - 1, s - (k - 1));
            if(cur - dist > 0) cur -= dist;
            else cur += dist;
            cout<<cur<<' ';
            s -= dist;
            k--;
        }
    }
 
    return 0;
}
