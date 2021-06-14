#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 3e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
string pat;
 
vector<int> build()
{
    vector<int> ret(sz(pat));
    for(int i = 1, k = 0; i < sz(pat); i++)
    {
        while(k > 0 and pat[i] != pat[k]) k = ret[k - 1];
        if(pat[i] == pat[k]) ret[i] = ++k;
        else ret[i] = k;
    }
    return ret;
}
 
int main()
{
    Assem99
    cin>>pat;
    vector<int> v = build();
    if(v.back() == 0) return cout<<"Just a legend", 0;
    for(int i = 0; i < sz(v) - 1; i++)
    {
        if(v[i] == v.back()) return cout<<pat.substr(0, v.back()), 0;
    }
    if(v[v.back() - 1] != 0) cout<<pat.substr(0, v[v.back() - 1]);
    else cout<<"Just a legend";
 
    return 0;
}
