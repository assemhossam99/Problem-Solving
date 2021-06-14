#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n; cin>>n;
    int arr[n + 5];
    for(int i = 0; i < n; i++) cin>>arr[i];
    if(n == 1 || (n == 2 && arr[0] == arr[1])) return cout<<-1, 0;
    int mn = 1e9, id = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < mn)
        {
            mn = arr[i];
            id = i;
        }
    }
    cout<<1<<endl<<id + 1;
 
    return 0;
}
