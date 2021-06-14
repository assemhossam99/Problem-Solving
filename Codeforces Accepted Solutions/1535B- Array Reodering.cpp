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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> vec, o, e;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            if(a & 1) o.push_back(a);
            else e.push_back(a);
        }
        for(auto it : e) vec.push_back(it);
        for(auto it : o) vec.push_back(it);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                ans += (__gcd(vec[i], 2 * vec[j]) > 1);
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
