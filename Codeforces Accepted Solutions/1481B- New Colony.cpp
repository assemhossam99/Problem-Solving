#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 31, p2 = 37;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n, k; cin>>n>>k;
        int arr[n + 5], ans = -1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        arr[n] = 0;
        for(int i = 0; i < 10000; i++)
        {
            if(!k) break;
            bool ok = false;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] >= arr[i + 1]) continue;
                else
                {
                    ok = true;
                    ans = i;
                    arr[i]++;
                    break;
                }
            }
            if(!ok) ans = -1;
            k--;
        }
        if(!k and ans <= n - 2 and ans != -1) cout<<ans + 1<<endll;
        else cout<<-1<<endll;
    }
 
    return 0;
}
