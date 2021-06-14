#include <bits/stdc++.h>
#include <deque>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    stack<string> st;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        st.push(s);
    }
    map<string, bool> mp;
 
    while(!st.empty())
    {
        if(mp[st.top()] == false)
        {
            cout<<st.top()<<endl;
            mp[st.top()] = true;
        }
        st.pop();
    }
 
    return 0;
}
