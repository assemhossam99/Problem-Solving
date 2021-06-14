#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int arr[N], n;
int bsLeft(int search)
{
    int start = 0, end = n - 1, mid, ans = -1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] <= search)
        {
            ans = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return ans;
}
int bsRight(int search)
{
    if(search & 1) search++;
    search /= 2;
    int start = 0, end = n - 1, mid, ans = -1;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] >= search)
        {
            ans = mid;
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ans;
}
 
int main()
{
    assem99
    RWFile
    cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n);
    int ans = oo;
    for(int i = 0; i < n; i++)
    {
        int cursmall = i, curBig = n - i - 1;
        int left = bsLeft(2 * arr[i]), right = bsRight(arr[i]);
        if(~left) cursmall += (n - left - 1);
        if(~right) curBig += right;
        ans = min({ans, curBig, cursmall});
    }
    cout<<ans;
 
    return 0;
}
