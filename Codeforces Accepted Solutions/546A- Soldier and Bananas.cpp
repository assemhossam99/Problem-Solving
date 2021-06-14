#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int cost , dollars , banana , ans;
    cin>>cost>>dollars>>banana;
    ans = 0;
    for(int i=1; i<=banana; i++)
        ans += (i * cost);
 
    if (ans <= dollars)
        cout<<'0';
    else
        cout<<ans - dollars;
 
    return 0;
}
