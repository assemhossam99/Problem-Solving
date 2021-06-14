#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int arr[N], brr[N], tree[4 * N];
 
struct node
{
    int left, right;
    node()
    {
        left = right = -1;
    }
} lazy[4 * N];
 
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = brr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
}
 
void propagate(int node, int start, int end)
{
    if(~lazy[node].left)
    {
        if(start == end)
        {
            tree[node] = arr[lazy[node].left];
            return;
        }
        int mid = (lazy[node].left + lazy[node].right) / 2;
        lazy[2 * node + 1].left = lazy[node].left;
        lazy[2 * node + 1].right = mid;
        lazy[2 * node + 2].left = mid + 1;
        lazy[2 * node + 2].right = lazy[node].right;
        lazy[node].left = lazy[node].right = -1;
    }
}
 
void update(int node, int start, int end, int l, int r, int val)
{
    if(start > end || end < l || start > r) return;
    propagate(node, start, end);
    if(l <= start && end <= r)
    {
        lazy[node].left = (start - l) + val;
        lazy[node].right = (end - start) + lazy[node].left;
        return;
    }
    int mid = (start + end) / 2;
    update(2 * node + 1, start, mid, l, r, val);
    update(2 * node + 2, mid + 1, end, l, r, val);
}
 
int query(int node, int start, int end, int x)
{
    propagate(node, start, end);
    if(start == end) return tree[node];
    int mid = (start + end) / 2;
    if(x > mid) return query(2 * node + 2, mid + 1, end, x);
    else return query(2 * node + 1, start, mid, x);
}
 
int main()
{
    Assem99
    int n, q; cin>>n>>q;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < n; i++) cin>>brr[i];
    build(0, 0, n - 1);
    while(q--)
    {
        int op; cin>>op;
        if(op == 1)
        {
            int x, y, k; cin>>x>>y>>k;
            x--, y--, k--;
            update(0, 0, n - 1, y, y + k, x);
        }
        else
        {
            int x; cin>>x;
            x--;
            cout<<query(0, 0, n - 1, x)<<endl;
        }
    }
 
    return 0;
}
