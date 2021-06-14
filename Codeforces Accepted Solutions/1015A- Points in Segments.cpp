#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n, m; cin>>n>>m;
    int l[n + 5], r[n + 5];
    for(int i = 0; i < n; i++) cin>>l[i]>>r[i];
    vector<int> vec;
    for(int i = 1; i<= m; i++)
    {
        bool found = false;
        for(int j = 0; j < n; j++)
        {
            if(i >= l[j] and i <= r[j]) found = true;
        }
        if(!found) vec.push_back(i);
    }
    cout<<sz(vec)<<endll;
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
