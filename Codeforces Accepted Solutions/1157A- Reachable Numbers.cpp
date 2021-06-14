#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , cntr = 1 , temp;
    cin>>n;
    
    if(n < 10)
    {
        cout<<'9';
        return 0;
    }
    
    while(n != 0)
    {
        cntr += (10 - (n % 10) )- 1;
        temp = n;
        n /= 10;
    }
 
    cntr += temp;
 
    cout<<cntr;
 
    return 0;
}
