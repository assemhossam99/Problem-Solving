#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        if(n <= 2)
        {
            cout<<1<<endl;
        }
        else
        {
            n -= 3;
            int floor = n / x;
            cout<<floor + 2<<endl;
        }
    }
 
    return 0;
}
