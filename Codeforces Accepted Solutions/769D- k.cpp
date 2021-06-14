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
 
vector<int> vec[N];
int arr[N], freq[N];
 
int main()
{
    Assem99
    int n, k; cin>>n>>k;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i <= 1e4; i++)
    {
        for(int j = 0; j <= 1e4; j++)
        {
            int cur = (i ^ j);
            if(__builtin_popcount(cur) == k) vec[i].push_back(j);
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(auto it : vec[arr[i]]) ans += freq[it];
        freq[arr[i]]++;
    }
    cout<<ans;
 
    return 0;
}
