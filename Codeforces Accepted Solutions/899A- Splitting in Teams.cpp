#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    int one = 0, two = 0;
    for(int i = 0 ;i < n; i++)
    {
        int a; cin>>a;
        if(a == 1) one++;
        else two++;
    }
    int ans = 0;
    while(one && two)
    {
        ans++;
        one--, two--;
    }
    while(one >= 3)
    {
        ans++;
        one -= 3;
    }
    cout<<ans;
 
    return 0;
}
