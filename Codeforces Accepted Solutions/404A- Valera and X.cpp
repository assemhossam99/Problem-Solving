#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n;
    char arr[1001][1001] , c1 , c2;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
 
    c1 = arr[0][0];
    c2 = arr[0][1];
 
    if(c1 == c2)
    {
        cout<<"NO";
        return 0;
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j || i + j == n -1 )
            {
                if(arr[i][j] != c1)
                {
                    cout<<"NO";
                    return 0;
                }
            }
 
            else
            {
                if(arr[i][j] != c2)
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
 
    cout<<"YES";
 
    return 0;
}
