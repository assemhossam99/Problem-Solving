#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a1 , a2 , a3 , b1 , b2 , b3 , c , cups , medals , ans , ans1 , ans2;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>c;
    cups = a1+a2+a3;
    medals = b1+b2+b3;
    // cups = 3    medals = 3   ans = 2;
    if(cups % 5 == 0)
        ans1 = (cups / 5) ;
    else
        ans1 = (cups / 5) + 1;
 
    if(medals % 10 == 0)
        ans2 = (medals / 10);
    else
        ans2 = (medals / 10) + 1;
 
    ans = ans1 + ans2;
 
    if(ans <= c)
        cout<<"YES";
    else
        cout<<"NO";
 
 
    return 0;
}
