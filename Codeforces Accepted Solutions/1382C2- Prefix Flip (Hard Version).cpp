#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string a, b ;cin>>a>>b;
        a += '0', b += '0';
        vector<int> vec1, vec2;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] != a[i - 1]) vec1.push_back(i);
            if(b[i] != b[i - 1]) vec2.push_back(i);
        }
        sort(vec2.rbegin(), vec2.rend());
        for(auto it : vec2) vec1.push_back(it);
        cout<<sz(vec1)<<' ';
        for(auto it : vec1) cout<<it<<' ';
        cout<<endll;
    }
 
    return 0;
}
