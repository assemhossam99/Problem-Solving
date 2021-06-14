#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , x , y , z , sumx = 0 , sumy = 0 , sumz = 0;
    bool eq = true;
    vector<int> vx , vy , vz;
 
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        vx.push_back(x);
        vy.push_back(y);
        vz.push_back(z);
    }
 
    for(int i=0; i<n; i++)
    {
        sumx += vx[i];
        sumy += vy[i];
        sumz += vz[i];
    }
 
    if(sumx == 0 && sumy == 0 && sumz == 0)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}
