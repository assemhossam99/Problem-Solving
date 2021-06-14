#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    int n, m; cin>>n>>m;
    int arr[n + 5][m + 5];
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin>>arr[i][j];
    int ans = arr[1][1];
    for(int i = 2; i <= n; i++) ans ^= arr[i][1];
    if(ans)
    {
        cout<<"TAK"<<endll;
        for(int i = 0; i < n; i++) cout<<1<<' ';
    }
    else
    {
        pair<int, int> cur = {oo, oo};
        for(int i = 1; i <= n; i++) for(int j = 2; j <= m; j++) if(arr[i][j] != arr[i][j - 1]){cur = {i, j}; break;}
        if(cur.first == oo) cout<<"NIE";
        else
        {
            cout<<"TAK"<<endll;
            for(int i = 1; i <= n; i++)
            {
                if(i != cur.first) cout<<1<<' ';
                else cout<<cur.second<< ' ';
            }
        }
    }
 
    return 0;
}
