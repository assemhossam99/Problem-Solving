#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , k , arr[100001] , ans , indx;
    cin>>n>>k;
    cin>>arr[0]>>arr[1];
    ans = arr[0] - arr[1] - k;
 
    for(int i=2; i<n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=1; i<n - 1; i++)
    {
        if(arr[i] - arr[i + 1] - k > ans)
            ans = arr[i] - arr[i + 1] - k;
    }
    if(ans < 0)
        cout<<"0";
    else
        cout<<ans;
 
 
    return 0;
}
