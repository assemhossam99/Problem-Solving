#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, arr[100005];
    cin>>n;
    for(int i = 0 ; i < n; i++)
        cin>>arr[i];
 
    int l = 0, r = n - 1, a = 0, b = 0;
    while(l <= r)
    {
        if(l == r)
        {
            r--;
            a++;
        }
        else if(arr[l] < arr[r])
        {
            a++;
            arr[r] -= arr[l];
            l++;
            if(l == r)
            {
                b++;
                break;
            }
        }
        else if(arr[l] > arr[r])
        {
            b++;
            arr[l] -= arr[r];
            r--;
            if(r == l)
            {
                a++;
                break;
            }
        }
        else
        {
            a++;
            b++;
 
            l++;
            r--;
        }
    }
    cout<<a <<' '<<b;
 
    return 0;
}
