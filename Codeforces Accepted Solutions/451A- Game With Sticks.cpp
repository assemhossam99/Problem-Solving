#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m , cntr = 0;
    cin>>n>>m;
    while (n!=0 && m!=0)
    {
        n--;
        m--;
        cntr++;
    }
 
    if(cntr % 2 == 0)
        cout<<"Malvika";
    else
        cout<<"Akshat";
 
    return 0;
}
