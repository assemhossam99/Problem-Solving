#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int arr[4],d , ans = 0;
 
    for(int i=0; i<3; i++)
        cin>>arr[i];
 
    cin>>d;
 
    sort(arr , arr + 3);
 
    for(int i=0; i<2; i++)
    {
        if(arr[i + 1] - arr[i] < d)
            ans += (d - (abs(arr[i + 1] - arr[i])));
    }
 
    cout<<ans;
 
    return 0;
}
