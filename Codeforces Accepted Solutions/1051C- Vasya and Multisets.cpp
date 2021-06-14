#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<ii>
#define point complex<double>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define F first
#define S second
#define endline '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, INF = 1e9;
const double pi = acos(-1);
using namespace std;
 
int freq[N], arr[N];
char c[N];
 
int main()
{
    assem99
    int n; cin>>n;
    int cnta = 0, cntb = 0;
    rep(i, 0, n)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        c[i] = 'A';
    }
    rep(i, 0, 105) cnta += (freq[i] == 1);
    rep(i, 0, n)
    {
        if(cnta - cntb > 1)
        {
            if(freq[arr[i]] == 1)
            {
                cntb++;
                cnta--;
                c[i] = 'B';
                freq[arr[i]]--;
            }
        }
    }
    rep(i, 0, n)
    {
        if(cnta != cntb)
        {
            if(freq[arr[i]] > 2)
            {
                if(cntb < cnta) cntb++;
                else cnta++;
                freq[arr[i]] = 0;
                c[i] = 'B';
            }
        }
    }
    if(cnta == cntb)
    {
        cout<<"YES"<<endl;
        rep(i, 0, n) cout<<c[i];
    }
    else cout<<"NO";
 
    return 0;
}
