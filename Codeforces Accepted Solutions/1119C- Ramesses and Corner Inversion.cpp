#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
 
int main()
{
    assem99
    int n, m; cin>>n>>m;
    int arr[n + 5][m + 5], brr[n + 5][m + 5], diff[n + 5][m + 5];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>brr[i][j];
            diff[i][j] = ((arr[i][j] != brr[i][j])? 1 : 0);
        }
    }
 
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < m; j++) cnt += diff[i][j];
        if(cnt & 1) return cout<<"No", 0;
    }
    for(int i = 0; i < m; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++) cnt += diff[j][i];
        if(cnt & 1) return cout<<"No", 0;
    }
    cout<<"Yes";
 
    return 0;
}
