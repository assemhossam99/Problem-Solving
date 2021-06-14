#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int arr[4] = {0, 3, 1, 2};
    int n; cin>>n;
    int a = n % 4, b = (n + 1) % 4, c = (n + 2 ) % 4, ans;
    if(arr[a] > arr[b] and arr[a] > arr[c]) ans = 0;
    if(arr[b] > arr[a] and arr[b] > arr[c]) ans = 1;
    if(arr[c] > arr[a] and arr[c] > arr[b]) ans = 2;
    cout<<ans<<' ';
    n += ans;
    if(n % 4 == 0) cout<<'D';
    else if(n % 4 == 1) cout<<"A";
    else if(n % 4 == 2) cout<<"C";
    else cout<<"B";
 
 
    return 0;
}
