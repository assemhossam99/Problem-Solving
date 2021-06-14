#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a , b , s , t;
    int cntr = 0;
    bool found = false;
    cin>>a>>b>>s;
    t = a + b;
 
    if(s.size() != t.size())
    {
        cout<<"NO";
        return 0;
    }
 
    for(int i=0; i<s.size(); i++)
    {
        found = false;
        for(int j=0; j<t.size(); j++)
        {
            if(s[i] == t[j])
            {
                t[j] = '*';
                found = true;
                cntr++;
                break;
            }
        }
        if(!found)
        {
            cout<<"NO";
            return 0;
        }
    }
 
 
    (cntr == s.size())?cout<<"YES":cout<<"NO";
 
 
 
 
    return 0;
}
