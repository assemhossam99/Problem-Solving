#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 9, N = 1e7 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int n, k;
ll solve(int x)
{
    ll ret = 0;
    int cnt = 0;
    while(x / pow(k, cnt) != 0)
    {
        ret += x / pow(k, cnt++);
    }
    return ret;
}
 
int main()
{
    assem99
    cin>>n>>k;
    int start = 0, end = 1e9, mid, ans;
    while(start <= end)
    {
        mid = (start + end) / 2;
        ll cur = solve(mid);
        if(cur >= n) ans = mid, end = mid - 1;
        else start = mid + 1;
    }
    cout<<ans;
 
 
    return 0;
}
