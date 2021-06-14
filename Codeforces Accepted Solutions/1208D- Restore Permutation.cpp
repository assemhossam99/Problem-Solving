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
 
ll tree[4 * N], arr[N], lazy[4 * N], ans[N];
 
void propagate(int node, int start, int end)
{
    if(lazy[node])
    {
        tree[node] += lazy[node];
        if(start != end)
        {
            lazy[2 * node + 1] += lazy[node];
            lazy[2 * node + 2] += lazy[node];
        }
        lazy[node] = 0;
    }
}
 
void build(int node, int start, int end)
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
 
void update(int node, int start, int end, int l, int r, ll val)
{
    propagate(node, start, end);
    if(start > end || start > r || end < l) return;
    if(start >= l && end <= r)
    {
        lazy[node] += val;
        propagate(node, start, end);
        return;
    }
    int mid = (start + end) / 2;
    update(2 * node + 1, start, mid, l, r, val);
    update(2 * node + 2, mid + 1, end, l, r, val);
    propagate(2 * node + 1, start, mid);
    propagate(2 * node + 2, mid + 1, end);
    tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
}
 
int find(int node, int start, int end)
{
    propagate(node, start, end);
    if(start == end) return start;
    int mid = (start + end) / 2;
    propagate(2 * node + 1, start, mid);
    propagate(2 * node + 2, mid + 1, end);
    if(tree[node] == tree[2 * node + 2]) return find(2 * node + 2, mid + 1, end);
    else return find(2 * node + 1, start, mid);
}
 
int main()
{
    Assem99
    int n; cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    build(0, 0, n - 1);
    for(int i = 1; i <= n; i++)
    {
        int idx = find(0, 0, n - 1);
        ans[idx] = i;
        update(0, 0, n - 1, idx, idx, 1e16);
        update(0, 0, n - 1, idx + 1, n - 1, -i);
    }
    for(int i = 0; i < n; i++) cout<<ans[i]<<' ';
 
    return 0;
}
