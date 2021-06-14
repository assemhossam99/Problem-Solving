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
 
int arr[N];
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a, b, c;
        rep(i, 0, n) cin>>arr[i];
        bool inc = false, dec = false;
        rep(i, 1, n)
        {
            if(arr[i] > arr[i - 1]) inc = true, a = i, b = i + 1;
            if(inc and arr[i] < arr[i - 1])
            {
                dec = true;
                c = i + 1;
                break;
            }
        }
        if(dec and inc) cout<<"YES"<<endl<<a<<' '<<b<<' '<<c<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
