#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int n, arr[N], tree[4 * N], pref[N], suf[N];
 
void pre()
{
    for(int i = 0; i <= n; i++) pref[i] = suf[i] = 0;
    int sz = 1;
    while(sz < 2 * n) sz *= 2;
    for(int i = 0; i <= sz; i++) tree[i] = oo;
}
 
void build(int node, int start ,int end)
{
    if(start == end)
    {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
    tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
}
 
int query(int node, int start, int end, int l, int r)
{
    if(start > end || start > r || end < l) return oo;
    if(start >= l && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return min(query(2 * node + 1, start, mid, l, r), query(2 * node + 2, mid + 1, end, l, r));
}
 
int bs(int start, int end, int val)
{
    int ret = -1, mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(pref[mid] <= val)
        {
            ret = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return ret;
}
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        pre();
        for(int i = 0; i < n; i++) cin>>arr[i];
        build(0, 0, n - 1);
        for(int i = 0; i < n; i++)
        {
            if(!i) pref[i] = arr[i];
            else pref[i] = max(pref[i - 1], arr[i]);
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(i == n - 1) suf[i] = arr[i];
            else suf[i] = max(suf[i + 1], arr[i]);
        }
        for(int i = n - 1; i > 1; i--)
        {
            int idx = bs(0, i - 2, suf[i]);
            if(idx == -1) continue;
            if(pref[idx] == suf[i])
            {
                if(query(0, 0, n - 1, idx + 1, i - 1) == suf[i])
                {
                    cout<<"YES"<<endl<<idx + 1<<' '<<i - idx - 1<<' '<< n - i<<endl;
                    goto finish;
                }
                else
                {
                    idx--;
                    if(idx >= 0 && pref[idx] == suf[i] && query(0, 0, n - 1, idx + 1, i - 1) == suf[i])
                    {
                        cout<<"YES"<<endl<<idx + 1<<' '<<i - idx - 1<<' '<< n - i<<endl;
                        goto finish;
                    }
                }
            }
 
        }
        cout<<"NO"<<endl;
        finish:;
    }
 
    return 0;
}
