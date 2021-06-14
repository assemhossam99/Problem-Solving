#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a , sum = 0;
    cin>>a;
    int temp = a;
    while(true)
    {
        a = temp;
        sum = 0;
        while(a!=0)
        {
            sum += a % 10;
            a /= 10;
        }
        if(sum % 4 == 0)
        {
            cout<<temp;
            return 0;
        }
        else
            temp++;
 
    }
 
    return 0;
}
