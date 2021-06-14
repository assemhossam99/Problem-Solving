#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, arr[2005];
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n, sum = 0, odd = 0, even = 0;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(arr[j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            sum += arr[j];
        }
        if(sum % 2 == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(even > 0 && odd > 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
