#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , arr[105] , indx , sum1 , sum2 , cntr;
    cin>>n;
    indx = n - 1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr + n);
    while(true)
    {
        sum1 = 0;
        sum2 = 0;
        cntr= 0;
        for(int i=n-1; i>=indx; i--)
        {
            sum1 += arr[i];
            cntr++;
        }
        for(int i=0; i<indx; i++)
            sum2 += arr[i];
 
        if(sum1 > sum2)
        {
            cout<<cntr;
            return 0;
        }
        indx--;
    }
    // 1  2  3  5
 
    return 0;
}
