#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string a, b; cin>>a>>b;
        int red = 0, blue = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i]) red++;
            else if(a[i] < b[i]) blue++;
        }
        if(red > blue) cout<<"RED";
        else if(red < blue) cout<<"BLUE";
        else cout<<"EQUAL";
        cout<<endll;
    }
 
    return 0;
}
