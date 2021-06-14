#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int solve(int num, int n)
{
    if(num > n)
        return 0;
 
    int ret = 1 + solve(num * 10, n) + solve(num * 10 + 1, n);
    return ret;
}
 
int main()
{
    int n;
    cin>>n;
    cout<<solve(1, n);
 
    return 0;
}
