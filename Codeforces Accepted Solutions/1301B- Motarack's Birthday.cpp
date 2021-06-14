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
 
int arr[N], brr[N], n;
int solve(int a)
{
    int ret = 0;
    for(int i = 0; i < n; i++)
    {
        brr[i] = (arr[i] == -1)? a : arr[i];
        if(i) ret = max(ret, abs(brr[i] - brr[i - 1]));
    }
    return ret;
}
int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < n; i++) cin>>arr[i];
        int start = 0, end = oo, mid1, mid2, m1 = 0, m2 = 0, m = INT_MAX, k = 0;
        while(start <= end)
        {
            mid1 = start + (end - start) / 3, mid2 = end - (end - start) / 3;
            m1 = solve(mid1);
            m2 = solve(mid2);
            if(m1 < m2)
            {
                end = mid2 - 1;
                m = m1;
                k = mid1;
            }
            else
            {
                start = mid1 + 1;
                m = m2;
                k = mid2;
            }
        }
        cout<<m<<' '<<k<<endll;
    }
 
 
    return 0;
}
