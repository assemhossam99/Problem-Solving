#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , y , arr[100001] , cntr1 = 0 , cntr = 0;
 
    cin>>n>>y;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(5 - arr[i] >= y)
            cntr1++;
 
        if(cntr1 == 3)
        {
            cntr++;
            cntr1 = 0;
        }
    }
    cout<<cntr;
    return 0;
}
