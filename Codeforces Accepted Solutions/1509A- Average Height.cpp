#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> o, e;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            if(a & 1) o.push_back(a);
            else e.push_back(a);
        }
        for(auto it : o) cout<<it<<' ';
        for(auto it: e) cout<<it<<' ';
        cout<<endl;
    }
 
 
    return 0;
}
