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
int x[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int y[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5;
const double pi = acos(-1);
using namespace std;
 
int arr[N];
 
int main()
{
    assem99
    int n; cin>>n;
    ld sum = 0; int siz = 1;
    vector<int> vec;
    while(n--)
    {
        int a; cin>>a;
        if(a == 1)
        {
            int a, b; cin>>a>>b;
            sum += a * b;
            arr[a] += b;
        }
        if(a == 2)
        {
            int a; cin>>a;
            vec.push_back(a);
            sum += a;
            siz++;
        }
        if(a == 3)
        {
            sum -= vec.back() + arr[siz];
            arr[siz - 1] += arr[siz];
            arr[siz] = 0;
            siz--;
            vec.pop_back();
        }
        cout<<fixed<<setprecision(9)<<sum / siz<<endline;
    }
 
 return 0;
}
