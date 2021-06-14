#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    string s; cin>>s;
    ld ans = 0;
    for(char c = 'a'; c <= 'z'; c++)
    {
        vector<int> vec;
        for(int i = 0; i < sz(s); i++) if(s[i] == c) vec.push_back(i);
        int mx = 0;
        for(int i = 0; i < sz(s); i++)
        {
            int freq[30] = {};
            for(auto it : vec) freq[s[(i + it) % sz(s)] - 'a']++;
            int cnt = 0;
            for(int j = 0; j < 26; j++) cnt += freq[j] == 1;
            mx = max(mx, cnt);
        }
        ans += mx;
    }
    cout<<fixed<<setprecision(10)<<ans / sz(s);
 
 
    return 0;
}
