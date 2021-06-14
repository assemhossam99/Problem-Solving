#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int n, lazy[4 * N], tree[4 * N];
 
void update(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] && !tree[node])
    {
        tree[node] = lazy[node];
        if(start != end)
        {
            lazy[2 * node] = lazy[node];
            lazy[2 * node + 1] = lazy[node];
        }
    }
    lazy[node] = 0;
    if(start > r || end < l || r < l) return;
    if(start >= l && end <= r)
    {
        lazy[node] = val;
        if(!tree[node])
        {
            tree[node] = lazy[node];
            if(start != end)
            {
                lazy[2 * node] = lazy[node];
                lazy[2 * node + 1] = lazy[node];
            }
        }
        lazy[node] = 0;
        return ;
    }
    int mid = (start + end) / 2;
    update(2 * node, start, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
}
 
int query(int node, int start, int end, int val)
{
    if(lazy[node] && !tree[node])
    {
        tree[node] = lazy[node];
        if(start != end)
        {
            lazy[2 * node] = lazy[node];
            lazy[2 * node + 1] = lazy[node];
        }
    }
    lazy[node] = 0;
    if(start == end) return tree[node];
    int mid = (start + end) / 2;
    if(val <= mid) return query(2 * node, start, mid, val);
    else return query(2 * node + 1, mid + 1, end, val);
}
 
int main()
{
    Assem99
    int q;
    cin>>n>>q;
    while(q--)
    {
        int l, r, x; cin>>l>>r>>x;
        update(1, 1, n, l, x - 1, x);
        update(1, 1, n, x + 1, r, x);
    }
    for(int i = 1; i <= n; i++) cout<<query(1, 1, n, i)<<' ';
 
    return 0;
}
