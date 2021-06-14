#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int pref[100005], suf[100005];
 
int main()
{
    int n;
    cin>>n;
    int arr[100005];
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    pref[0] = arr[0];
    for(int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + arr[i];
    suf[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
        suf[i] = suf[i + 1] + arr[i];
 
    int ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(pref[i - 1] == suf[i])
            ans++;
    }
    cout<<ans;
 
 
    return 0;
}
