#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int  arr[105], n, lvl = 1, vis[105];
 
void solve(int idx, int lvl)
{
    int mxR = 0, mxL = 0, idL = -1, idR = -1;
    for(int i = idx + 1; i < n; i++)
    {
        if(vis[i] != -1) break;
        if(arr[i] > mxR)
        {
            mxR = arr[i];
            idR = i;
        }
    }
    if(idR != -1)
    {
        vis[idR] = lvl;
        solve(idR, lvl + 1);
    }
    for(int i = idx - 1; i >= 0; i--)
    {
        if(vis[i] != -1) break;
        if(arr[i] > mxL)
        {
            mxL = arr[i];
            idL = i;
        }
    }
    if(idL != -1)
    {
        vis[idL] = lvl;
        solve(idL, lvl + 1);
    }
}
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        memset(vis, -1, sizeof vis);
        cin>>n;
        int mx = 0, id = -1;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i] > mx)
            {
                mx = arr[i];
                id = i;
            }
        }
        vis[id] = 0;
        solve(id, 1);
        for(int i = 0; i < n; i++) cout<<vis[i]<<' ';
        cout<<endll;
    }
 
    return 0;
}
