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
    int t; cin>>t;
    while(t--)
    {
        multiset<int> st;
        int n; cin>>n;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            if(a > 2) st.insert(a);
            else if(a == 2) cnt++;
        }
        ll ans = 1LL * sz(st) * cnt;
        ans += (1LL * sz(st) * (sz(st) - 1)) / 2;
        cout<<ans<<endll;
    }

    return 0;
}