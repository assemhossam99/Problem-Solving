#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int a, b; cin>>a>>b;
    if(a == 9 && b == 1) cout<< "99 100";
    else if(b - a > 1 || a > b) cout<<-1;
    else if(a == b) cout<<a<<1<<' '<<b<<2;
    else cout<<a<<9<<' '<<b<<0;
 
    return 0;
}
