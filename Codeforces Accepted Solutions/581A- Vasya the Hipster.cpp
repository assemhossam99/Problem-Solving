#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int r , b , ans , temp;
    cin>>r>>b;
// 2   3
 
    ans = min(r , b);
    cout<<ans<<' ';
    temp = r;
    r -= min(r , b);
    b -= min(temp , b);
 
    ans = (r / 2) + (b / 2);
    cout<<ans;
 
 
    return 0;
}
