#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    string s, t = ""; cin>>s;
    for(int i = 0; i < min(2, sz(s)); i++) t += s[i];
    int j = 2;
    for(int i = 2; i < sz(s); i++)
    {
        if(s[i] == t[j - 1] and s[i] == t[j - 2]) continue;
        if(sz(t) >= 3 and s[i] == t[j  - 1] and t[j - 2] == t[j - 3]) continue;
        t += s[i], j++;
    }
    cout<<t;
 
 
    return 0;
}
