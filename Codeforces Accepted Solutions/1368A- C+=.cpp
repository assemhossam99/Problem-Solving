#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a, b, n; cin>>a>>b>>n;
        int mn = min(a, b), mx = max(a, b), cnt = 0;
        while(mx <= n)
        {
            cnt++;
            mn += mx;
            int x = mx, y = mn;
            mn = min(x, y), mx = max(x, y);
        }
        cout<<cnt<<endl;
    }
 
    return 0;
}
