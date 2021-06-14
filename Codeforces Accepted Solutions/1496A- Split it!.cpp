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
        string s; cin>>s;
        if(!k)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int req;
        if(n & 1) req = n / 2;
        else req = (n - 1) / 2;
        if(req < k)
        {
            cout<<"NO"<<endl;
            continue;
        }
 
        int i = 0, j = sz(s) - 1, cnt = 0;
        while(i < j)
        {
            if(s[i++] == s[j--]) cnt++;
            else break;
        }
        if(cnt >= k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
