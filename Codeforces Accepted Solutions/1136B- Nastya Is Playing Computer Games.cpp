#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a , b , arr[100001] , cntr = 0 , szl = 0 , szr = 0;
    bool checked[100001];
    cin>>a>>b;
 
    szl = b - 1;
    szr = a - b;
 
    if(b == 1 || b == a)
        cout<<(3 * a);
 
    else
        cout<<(3 * a) + min(szl , szr);
 
    return 0;
}
