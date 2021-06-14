#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , arr[200002] , cntr , mx = -1 , Zcntr = 0 , cntrS = 0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 0)
            Zcntr++;
    }
 
    if(Zcntr == 0)
    {
        cout<<n;
        return 0;
    }
 
    if(n == 1 && arr[0] == 1)
    {
        cout<<'1';
        return 0;
    }
 
    if(n == 1 && arr[0] == 0)
    {
        cout<<'0';
        return 0;
    }
    cntr = 0;
 
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
            cntrS++;
 
        else
            break;
    }
 
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i] == 1)
            cntrS++;
 
        else
            break;
    }
 
    cntr = 0;
    for(int i=0; i<n; i++)
    {
 
        if(arr[i] == 1)
            cntr++;
 
        else
        {
            if(cntr > mx)
                mx = cntr;
 
            cntr = 0;
        }
    }
 
    cout<<max(cntrS , mx);
 
    return 0;
}
