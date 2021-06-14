#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int freq[n + 5];
        memset(freq, 0, sizeof freq);
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            freq[a]++;
        }
        sort(freq, freq + n + 5, greater<int>());
        int ans = 0, last = oo;
        for(int i = 0; i<= n; i++)
        {
            ans += max(0, min(freq[i], last));
            last = max(0, min(last, freq[i])) - 1;
        }
        cout<<ans<<endll;
    }
 
    return 0;
}
