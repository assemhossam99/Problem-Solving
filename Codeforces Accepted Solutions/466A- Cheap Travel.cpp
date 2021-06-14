#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    float n , m , a , b , offer1 , ans = 0;
    cin>>n>>m>>a>>b;
 
    offer1 = b / m;
 
    if(offer1 < a)
    {
        while(n!=0)
        {
            if(m <= n)
            {
                ans += b;
                n -= m;
            }
 
            else
            {
                if(a * n < b)
                    ans += a*n;
 
                else
                    ans += b;
                n = 0;
            }
        }
    }
 
    else
        ans += (a * n);
 
        cout.setf(ios::fixed);
cout << setprecision(0) ;
    cout<<ans;
 
    return 0;
}
