#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int n , arr[200001] , id1 , id0;
 
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
 
        if(arr[i] == 1)
        {
            id1 = i;
        }
        else if(arr[i] == 0)
        {
            id0 = i;
        }
    }
 
    cout<<min(id1 , id0) + 1;
 
    return 0;
}
