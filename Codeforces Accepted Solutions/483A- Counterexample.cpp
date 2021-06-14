#include <bits/stdc++.h>
 
using namespace std;
 
int gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
 
int main()
{
    long long l , r;
    cin>>l>>r;
 
    for(long long i=l; i<=r; i++)
    {
        if(i <= r && i + 1 <= r && i + 2 <= r)
        {
            if(gcd(i , i + 1) == gcd(i + 1 , i + 2) && gcd(i , i + 1) != gcd(i , i + 2))
            {
                cout<<i<<' '<<i + 1<<' '<<i + 2;
                return 0;
            }
        }
    }
    cout<<"-1";
 
    return 0;
}
