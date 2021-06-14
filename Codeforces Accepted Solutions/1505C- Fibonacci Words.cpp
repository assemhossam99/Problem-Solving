#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    map<char, int> mp;
    for(char c = 'A'; c <= 'Z'; c++)
    {
        mp[c] = c - 'A';
    }
    string s; cin>>s;
    bool ok = true;
    for(int i = 2; i < s.size(); i++)
    {
        int cur = mp[s[i - 1]] + mp[s[i - 2]];
        cur %= 26;
        if(mp[s[i]] != cur) ok = false;
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
 
    return 0;
}
