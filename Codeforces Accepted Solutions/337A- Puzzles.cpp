#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m , arr[1001] , ans = 1e3 , temp1 , temp2;
    cin>>n>>m;
 
    for(int i=0; i<m; i++)
        cin>>arr[i];
 
    sort(arr , arr + m);
    for(int i=0; i<= m-n; i++)
    {
        for(int j=i; j<i+n; j++)
        {
            if(j == i)
                temp1 = arr[j];
            if(j == i+n-1)
                temp2 = arr[i+n-1];
        }
        if(temp2 - temp1 < ans)
            ans = temp2 - temp1;
    }
 
    cout<<ans;
    return 0;
}
