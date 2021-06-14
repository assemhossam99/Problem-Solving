#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, arr[200005];
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n, z = 0;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(arr[0] == arr[j])
            {
                z++;
            }
        }
        if(z == n)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
 
    return 0;
}
