#include <bits/stdc++.h>
 
#define assem99 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int main()
{
    assem99;
    ////////////////////////////////////////////////////////////
    int n , m , e = 0 , o = 0;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>m;
        if(m % 2 == 0)
            e++;
        else
            o++;
    }
 
    cout<<min(e , o);
 
    return 0;
}
 
