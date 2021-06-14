#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    string s;
    cin>>n;
    bool check = true;
    for(int i=0; i<n; i++)
    {
        check = true;
        cin>>s;
        if(s.size() == 1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        sort(s.begin() , s.end());
        for(int j=0; j<s.size() - 1; j++)
        {
            if(s[j] + 1 != s[j+1])
                check = false;
        }
 
        if(check)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
 
    return 0;
}
