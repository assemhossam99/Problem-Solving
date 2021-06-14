#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , x , y , arr[20001];
    cin>>n>>x>>y;
 
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    sort(arr , arr + n , greater<int>());
 
    cout<<arr[x - 1] - arr[x];
 
    return 0;
}
