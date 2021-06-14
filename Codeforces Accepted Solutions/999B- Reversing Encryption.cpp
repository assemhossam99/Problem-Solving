#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int k , n , m;
    string s,t;
 
    cin>>n;
    cin>>s;
 
    vector<int> div;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            div.push_back(i);
    }
 
    n=div.size();
    for(int i=0;i<n;i++)
    {
        m=div[i];
        t="";
        for(int j=0;j<m;j++)
            t.push_back(s[j]);
 
        k=m-1;
        for(int j=0;j<m;j++){
            s[j]=t[k];
            k--;
        }
    }
 
    cout<<s;
 
    return 0;
}
 
