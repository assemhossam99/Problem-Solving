#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , money , sz , arr[100001] , price , cntr = 0 , arr2 [100001];
    bool arr3[100001] = {false};
    queue <int> q;
    vector <int> v;
    bool av = false;
    cin>>n>>money;
 
    for(int i=0; i<n; i++)
    {
        av = false;
        cin>>sz;
        for(int j=0; j<sz; j++)
        {
            cin>>price;
            if(price < money && !av)
            {
                av = true;
                arr3[i] = true;
                cntr ++;
            }
        }
    }
 
    int temp = cntr;
    cout<<cntr<<endl;
 
    for(int i=0; i<1e5 ;i++)
    {
        if(arr3[i] == true)
            v.push_back(i + 1);
    }
    sort(v.begin() , v.end());
 
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<' ';
    return 0;
}
