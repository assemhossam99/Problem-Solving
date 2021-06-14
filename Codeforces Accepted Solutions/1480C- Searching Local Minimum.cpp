#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    int arr[n + 5];
    memset(arr, 0, sizeof arr);
    arr[0] = arr[n + 1] = oo;
    int start = 1, end = n, mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(!arr[mid])
        {
            cout<<"? "<<mid<<endll<<flush;
            cin>>arr[mid];
        }
        if(!arr[mid + 1])
        {
            cout<<"? "<<mid + 1<<endll<<flush;
            cin>>arr[mid + 1];
        }
        if(!arr[mid - 1])
        {
            cout<<"? "<<mid - 1<<endll<<flush;
            cin>>arr[mid - 1];
        }
        if(arr[mid] < arr[mid + 1] and arr[mid] < arr[mid - 1])
        {
            cout<<"! "<<mid<<endll<<flush;
            break;
        }
        if(arr[mid + 1] > arr[mid - 1]) end = mid - 1;
        else start = mid + 1;
    }
 
    return 0;
}
