#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    string s, t; cin>>s>>t;
    int i = 0, j = n - 1, cnt = 0;
    while(i < j)
    {
        map<char, int> mp;
        mp[s[i]]++;
        mp[s[j]]++;
        mp[t[i]]++;
        mp[t[j]]++;
        if(sz(mp) == 2)
        {
            auto it = mp.begin();
            if(it->second != 2) cnt++;
        }
        else if(sz(mp) == 4) cnt += 2;
        else if(sz(mp) == 3)
        {
            if(s[i] == s[j] && t[i] != t[j]) cnt += 2;
            else if(s[i] == t[i] || t[j] == s[j]) cnt++;
            else if(s[i] != t[j] && s[j] == t[i]) cnt++;
            else if(s[i] == t[j] && s[j] != t[i]) cnt++;
            else if(t[i] == t[j] && s[i] != s[j]) cnt++;
        }
        i++, j--;
    }
    if(n & 1)
    {
        if(s[i] != t[i]) cnt++;
    }
    cout<<cnt;
 
    return 0;
}
