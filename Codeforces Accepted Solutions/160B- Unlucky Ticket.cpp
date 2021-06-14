#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , a1[1001] , a2[1001];
    char c;
    bool c1 = true , c2 = true;
 
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>c;
        a1[i] = int(c);
    }
 
    for(int i=0; i<n; i++)
    {
        cin>>c;
        a2[i] = int(c);
    }
 
    sort(a1 , a1 + n);
    sort(a2 , a2 + n);
 
    for(int i=0; i<n; i++)
    {
        if(a1[i] >= a2[i])
            c1 = false;
    }
 
    for(int i=0; i<n; i++)
    {
        if(a1[i] <= a2[i])
            c2 = false;
    }
 
    if(c1 || c2)
        cout<<"YES";
 
    else
        cout<<"NO";
    return 0;
}
