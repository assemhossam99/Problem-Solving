#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e6 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n;
    cin>>n;
    string s = "<3";
    for(int i = 0; i < n; i++)
    {
        string t; cin>>t;
        s += t;
        s += "<3";
    }
    string t; cin>>t;
    int i = 0, j = 0;
    while(i < sz(s) && j < sz(t))
    {
        if(s[i] == t[j]) i++, j++;
        else j++;
    }
    if(i == sz(s)) cout<<"yes";
    else cout<<"no";
 
    return 0;
}
