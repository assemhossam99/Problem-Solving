#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e2 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(!i or (i and arr[i] != arr[i - 1])) mp[arr[i]]++;
        }
        for(auto it : mp) mp[it.first]++;
        mp[arr[0]]--;
        mp[arr[n - 1]]--;
        int ans = oo;
        for(auto it : mp) ans = min(ans, it.second);
        cout<<ans<<endll;
    }

    return 0;
}