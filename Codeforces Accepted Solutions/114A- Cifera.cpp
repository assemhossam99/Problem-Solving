#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n , m , cntr = 0;
    cin>>n>>m;
    if(m == n)
    {
        cout<<"YES"<<endl<<'0';
        return 0;
    }
    while(1)
    {
        if(m % n == 0)
        {
            m /= n;
            cntr++;
        }
 
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
 
        if(m == n)
        {
            cout<<"YES"<<endl;
            cout<<cntr;
            break;
        }
 
    }
 
 
 
 
 
    return 0;
}
