#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   long long t , n , arr[10001] , sum = 0;
   cin>>t;
 
   while(t--)
   {
       int ans;
       cin>>n;
       sum = 0;
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
           sum += arr[i];
       }
 
       sort(arr , arr + n);
 
       int l , r , mid;
       l = 0;
       r = 1e7 + 1;
       while(l <= r)
       {
           mid = (l + r) / 2;
           if(n * mid >= sum)
           {
                r = mid - 1;
                ans = mid;
           }
           else
                l = mid + 1;
       }
 
       cout<<ans<<endl;
   }
 
    return 0;
}
