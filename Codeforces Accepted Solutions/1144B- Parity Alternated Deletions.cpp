#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , arr[100001] , sum1 = 0 , sum2 = 0 , arr1[100001] , moves;
    cin>>n;
    vector <int> even;
    vector <int> odd;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
        if(arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    if(even.size() == 0 || odd.size() == 0)
        moves = 1;
 
    else
        moves = 2 *( min(odd.size() , even.size()) + 1) - 1;
    sort(arr , arr + n);
    for(int i=0; i<moves; i++)
    {
        for(int j=n; j>= 0; j--)
        {
            if( i % 2 == 0 &&arr[j]  > 0 && arr[j] % 2 == 0)
            {
                arr[j] = 0;
                break;
            }
            else if(i % 2 != 0 && arr[j] > 0 && arr[j] % 2 != 0)
            {
                arr[j] = 0;
                break;
            }
        }
    }
 
    for(int i=0; i<n; i++)
        sum1 += arr[i];
 
    sort(arr1 , arr1 + n);
    for(int i=0; i<moves; i++)
    {
        for(int j=n; j>= 0; j--)
        {
            if(i % 2 == 0 && arr1[j] > 0 && arr1[j] % 2 != 0)
            {
                arr1[j] = 0;
                break;
            }
            else if(i % 2 != 0 && arr1[j]  > 0 && arr1[j] % 2 == 0)
            {
                arr1[j] = 0;
                break;
            }
        }
    }
 
    for(int i=0; i<n; i++)
        sum2 += arr1[i];
 
 
    cout<<min(sum1 , sum2);
    return 0;
}
