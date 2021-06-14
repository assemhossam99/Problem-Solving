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
    int n, t; cin>>n>>t;
    while(t--)
    {
        int k; cin>>k;
        int start = 1, end = n, mid, ans = -1;
        while(start <= end)
        {
            mid = (start + end) / 2;
            cout<<"? 1 "<<mid<<endl<<flush;
            int x;
            cin>>x;
            int zeroes = mid - x;
            if(zeroes >= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        if(ans != -1)
        {
            cout<<"! "<<ans<<endl<<flush;
            continue;
        }
        else
        {
            cout<<"-1"<<endl<<flush;
            break;
        }
    }
 
    return 0;
}
