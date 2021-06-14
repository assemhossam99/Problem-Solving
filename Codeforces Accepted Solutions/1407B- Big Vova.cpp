#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 1, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
ll gcd(ll a, ll b)
{
    if (!a)return b;
    return gcd(b % a, a);
}
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> vec;
        map<int, bool> mp;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            vec.push_back(a);
        }
        sort(vec.rbegin(), vec.rend());
        cout<<vec[0]<<' ';
        int GCD = vec[0];
        mp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            int cur = 0, out;
            for(int j = 1; j < n; j++)
            {
                if(mp[j] != 1)
                {
                    if(gcd(GCD, vec[j]) > cur)
                    {
                        cur = gcd(GCD, vec[j]);
                        out = j;
                    }
                }
            }
            GCD = cur;
            cout<<vec[out]<<' ', mp[out] = 1;
        }
        cout<<endll;
    }
 
    return 0;
}
