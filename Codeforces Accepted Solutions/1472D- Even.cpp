#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll arr[n + 5], e = 0, o = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] & 1) o += arr[i];
            else e += arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0 and arr[i] % 2 == 1) o -= arr[i];
            else if(i % 2 == 1 and arr[i] % 2 == 0) e -= arr[i];
        }
        if(e == o) cout<<"Tie"<<endll;
        else if(e > o) cout<<"Alice"<<endll;
        else cout<<"Bob"<<endll;
    }
 
    return 0;
}
