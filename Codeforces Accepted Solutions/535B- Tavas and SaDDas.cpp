#include <bits/stdc++.h>
 
using namespace std;
 
vector<long long> v;
void solve(long long x)
{
    if(x > 1e9)
        return;
 
    v.push_back(x);
    solve(x * 10 + 4);
    solve(x * 10 + 7);
}
int main()
{
    long long n;
    cin>>n;
    solve(0);
    sort(v.begin() , v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(n == v[i])
        {
            cout<<i;
            return 0;
        }
    }
 
    return 0;
}
