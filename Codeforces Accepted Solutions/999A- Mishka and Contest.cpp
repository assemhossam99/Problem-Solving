#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , k, arr[10001] , j = 0 , x , cntr = 0;
 
    cin>>n>>k;
    x = n - 1;
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    while(true)
    {
        if(j > x || (arr[j] > k && arr[x] > k))
            break;
 
        else if(arr[j] <= k)
        {
            cntr++;
            j++;
        }
 
        else if(arr[x] <= k)
        {
            cntr++;
            x--;
        }
    }
 
    cout<<cntr;
 
    return 0;
}
