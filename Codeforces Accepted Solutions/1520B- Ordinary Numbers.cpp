#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    vector<int> vec;
    for(int i = 1; i <= 9; i++)
    {
        int cur = 0;
        for(int j = 1; j <= 9; j++)
        {
            cur *= 10;
            cur += i;
            vec.push_back(cur);
        }
    }
    sort(vec.begin(), vec.end());
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int idx = lower_bound(vec.begin(), vec.end(), n) - vec.begin();
        if(vec[idx] == n) cout<<idx + 1<<endl;
        else cout<<idx<<endl;
    }
 
    return 0;
}
