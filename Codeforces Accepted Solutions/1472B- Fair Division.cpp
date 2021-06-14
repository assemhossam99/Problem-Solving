#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int arr[105];
    for(int i = 0; i < t; i++)
    {
        int n, cntOne = 0, cntTwo = 0;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(arr[j] == 1)
            {
                cntOne++;
            }
            else
            {
                cntTwo++;
            }
        }
        if(cntTwo % 2 == 0 && cntOne % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else if(cntTwo % 2 == 1 && cntOne >= 2 && cntOne % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
