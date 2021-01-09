#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n, k; cin>>n>>k;
        int ans = 1e9;
        map<int, int> mp;
        int arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i], mp[arr[i]]++;
        for(auto it : mp)
        {
            int cnt = 0, cur = 0;
            for(int i = 0; i < n; i++)
            {
                if(cnt == k)
                {
                    cur++;
                    cnt = 0;
                }
                if(cnt == 0 and arr[i] == it.first) continue;
                else cnt++;
            }
            cur += (cnt != 0);
            ans = min(ans, cur);
        }

        cout<<ans<<endll;
    }

    return 0;
}