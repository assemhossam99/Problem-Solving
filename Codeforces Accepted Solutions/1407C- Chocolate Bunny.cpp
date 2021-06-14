#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 1, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
int ask(int a, int b)
{
    cout<<"? "<<a + 1<<' '<<b + 1<<endll;
    cout.flush();
    int x; cin>>x;
    return x;
}
 
int main()
{
    assem99
    int n; cin>>n;
    int arr[n + 5];
    int mx = 0;
    for(int i = 1; i < n; i++)
    {
        int q1 = ask(mx, i), q2 = ask(i, mx);
        if(q1 > q2)
        {
            arr[mx] = q1;
            mx = i;
        }
        else arr[i] = q2;
    }
    arr[mx] = n;
    cout<<"! ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<' ';
 
    return 0;
}
