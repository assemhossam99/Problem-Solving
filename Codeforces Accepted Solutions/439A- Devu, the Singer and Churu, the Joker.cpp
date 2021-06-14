#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , t , arr[100001] , sumt = 0 , ans = 0;
    cin>>n>>t;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sumt += arr[i];
        if(i != n - 1)
            sumt += 10;
    }
 
    if(sumt > t)
    {
        cout<<"-1";
        return 0;
    }
 
    sort(arr , arr + n  , greater<int>());
 
    for(int i=0; i<n; i++)
    {
        if(arr[i] > t)
        {
            cout<<"-1";
        }
 
        t -= arr[i];
        if(i != n-1)
        {
            t -= 10;
            ans += 2;
        }
 
        else
        {
            if(t >= 5)
                ans += (t / 5);
        }
    }
 
    cout<<ans;
 
    return 0;
}
