#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m , cntr = 0;
    cin>>n>>m;
 
    for(int i=0; i<=sqrt(max(n , m)); i++)
    {
        for(int j=0; j<=sqrt(max(n , m)); j++)
        {
            if((i*i) + j == n && (j*j) + i == m)
                cntr++;
        }
    }
 
    cout<<cntr;
    return 0;
}
