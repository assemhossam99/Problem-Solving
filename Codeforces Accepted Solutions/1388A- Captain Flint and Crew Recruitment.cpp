#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n > 30 and n - 30 != 6 and n - 30 != 10 and n - 30 != 14) cout<<"YES"<<endll<<"6 10 14 "<<n - 30<<endll;
        else if(n > 39 and n - 39 != 10 and n - 39 != 14 and n - 39 != 15) cout<<"YES"<<endll<<"10 14 15 "<<n - 39<<endll;
        else if(n > 35 and n - 35 != 6 and n - 35 != 14 and n - 35 != 15) cout<<"YES"<<endll<<"6 14 15 "<<n - 35<<endll;
        else if(n > 31 and n - 31 != 6 and n - 31 != 10 and n - 31 != 15) cout<<"YES"<<endll<<"6 10 15"<<n - 31<<endll;
        else cout<<"NO"<<endll;
    }
 
    return 0;
}
