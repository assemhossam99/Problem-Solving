#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int a[N], b[N], n, m;
 
int main()
{
    Assem99
    cin>>n>>m;
    ll sum = 0;
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
        sum += b[i];
        vec.push_back(abs(a[i] - b[i]));
    }
    if(sum > m) return cout<<-1, 0;
    int ans = n;
    sort(vec.begin(), vec.end());
    for(auto it : vec)
    {
        if(sum + it <= m)
        {
            sum += it;
            ans--;
        }
        else break;
    }
    cout<<ans;
 
    return 0;
}
