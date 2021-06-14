#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
map<int, int> mp;
 
int main()
{
    assem99
    int n, k, m; cin>>n>>k>>m;
    int arr[n + 5], mod[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mod[i] = arr[i] % m;
        mp[mod[i]]++;
    }
    int ans = -1;
    for(auto it : mp)
    {
        if(it.second >= k)
        {
            ans = it.first;
            break;
        }
    }
    if(~ans)
    {
        cout<<"Yes"<<endll;
        for(int i = 0; i < n; i++)
        {
            if(mod[i] == ans and k)
            {
                k--;
                cout<<arr[i]<<' ';
            }
        }
    }
    else cout<<"No";
 
 
 
    return 0;
}
