#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{
    int n , k , arr[100001] , ans = 0 , cntr = 0;
    cin>>n>>k;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] < 0)
            cntr++;
    }
    if(cntr < k)
    {
        k -= cntr;
 
        for(int i=0; i<n; i++)
        {
            if(arr[i] < 0)
                arr[i] *= -1;
        }
 
        sort(arr , arr + n);
        if(k % 2 == 0)
        {
            for(int i=0; i<n; i++)
                ans += arr[i];
        }
 
        else
        {
            ans = arr[0] * -1;
            for(int i=1; i<n; i++)
                ans += arr[i];
        }
    }
 
    else
    {
        sort(arr , arr + n);
        for(int i=0; i<k; i++)
        {
            arr[i] *= -1;
        }
 
        for(int i=0; i<n; i++)
            ans += arr[i];
    }
 
 
 
    cout<<ans;
 
    return 0;
}
