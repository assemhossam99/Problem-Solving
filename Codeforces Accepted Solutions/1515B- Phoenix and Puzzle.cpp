#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = false;
        int n;
        cin>>n;
        ll start = 1, end = 1e5, mid; // 1e5 / 2 = 50000
        while(start <= end)
        {
            mid = (start + end) / 2;
            ll neededPieces = mid * mid * 2;
            if(neededPieces == n)
            {
                flag = true;
                break;
            }
            else if(neededPieces > n)
                end = mid - 1;
            else
                start = mid + 1;
        }
 
        start = 1, end = 1e5;
        while(start <= end)
        {
            mid = (start + end) / 2;
            ll neededPieces = mid * mid * 4;
            if(neededPieces == n)
            {
                flag = true;
                break;
            }
            else if(neededPieces > n)
                end = mid - 1;
            else
                start = mid + 1;
        }
 
        if(flag == true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
 
    return 0;
}
