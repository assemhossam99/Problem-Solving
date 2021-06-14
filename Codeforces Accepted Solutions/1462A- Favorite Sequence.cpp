#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int arr[305];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        int l = 0, r = n - 1, i = 0;
        while(l <= r)
        {
            if(i % 2 == 0)
            {
                cout<<arr[l]<<' ';
                l++;
            }
            else
            {
                cout<<arr[r]<<' ';
                r--;
            }
            i++;
        }
        cout<<endl;
    }
 
    return 0;
}
