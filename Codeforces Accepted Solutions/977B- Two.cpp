#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , cntr = 0 , mx = -1;
    string s , temp , ans;
    cin>>n>>s;
 
    for(int i=0; i<n-1; i++)
    {
        cntr = 0;
        temp = s.substr(i , 2);
        for(int j=i+1; j<n-1; j++)
        {
            if(s.substr(j , 2) == temp)
                cntr++;
        }
 
        if(cntr > mx)
        {
            ans = temp;
            mx = cntr;
        }
    }
 
    cout<<ans;
    return 0;
}
