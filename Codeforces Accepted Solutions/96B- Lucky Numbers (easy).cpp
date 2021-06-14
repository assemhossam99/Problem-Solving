#include <bits/stdc++.h>
 
using namespace std;
 
bool cnt(long long n)
{
    int cnt4 = 0 , cnt7 = 0;
    while(n != 0)
    {
        if(n % 10 == 4)
            cnt4++;
        if(n % 10 == 7)
            cnt7++;
 
        n /= 10;
    }
 
    if(cnt4 == cnt7)
        return true;
 
    else
        return false;
}
 
vector<long long> v;
void comb(long long n ,long long x)
{
    if(x >= 1e11)
        return;
 
    if(cnt(x))
        v.push_back(x);
    comb(n , x * 10 + 4);
    comb(n , x * 10 + 7);
}
 
 
int main()
{
    int n ;
 
    cin>>n;
    comb(n , 0);
    sort(v.begin() , v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(n <= v[i])
        {
            cout<<v[i];
            break;
        }
    }
 
    return 0;
}
