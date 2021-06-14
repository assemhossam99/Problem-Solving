#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5], ans = oo;
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++)
        {
            if(arr[i])
            {
                int l = 0, r = 0, pos = i - 1;
                for(int j = 0; j < i; j++)
                {
                    if(arr[j])
                    {
                        l = max(l, pos - j);
                        pos--;
                    }
                }
                pos = i + 1;
                for(int j = i + 1; j < n; j++)
                {
                    if(arr[j])
                    {
                        r = max(r, j - pos);
                        pos++;
                    }
                }
                ans = min(ans, r + l);
            }
        }
        cout<<ans<<endll;
    }
 
    return 0;
}
