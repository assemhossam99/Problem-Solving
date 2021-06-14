#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, arr[45];
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n, indE, indO, even = 0, odd = 0;
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
        }
        if(n % 2 == 0)
        {
            indE = n / 2;
            indO = n / 2;
        }
        else
        {
            indE = (n / 2) + 1;
            indO = n / 2;
        }
        if(indE != even || indO != odd)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(j % 2 != arr[j] % 2)
                {
                    cnt++;
                }
            }
            cout<<cnt / 2<<endl;
        }
    }
 
    return 0;
}
