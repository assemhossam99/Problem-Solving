#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9;
const ll mod1 = 1e9 + 7, mod2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
string s;
struct node
{
    int opened, closed, mx;
    node()
    {
        opened = closed = mx = 0;
    }
} tree[4 * N];
 
node rawa2(int idx)
{
    node n;
    if(s[idx] == '(') n.opened = 1, n.closed = 0;
    else n.opened = 0, n.closed = 1;
    n.mx = 0;
    return n;
}
 
node merge(node a, node b)
{
    node n;
    int mn = min(a.opened, b.closed);
    n.opened = a.opened + b.opened - mn;
    n.closed = a.closed + b.closed - mn;
    n.mx = (mn * 2) + a.mx + b.mx;
    return n;
}
 
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = rawa2(start);
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
    tree[node] = merge(tree[2 * node + 1], tree[2 * node + 2]);
}
 
node query(int node, int start, int end, int l, int r)
{
    if(start > end || start > r || end < l)
    {
        struct node n;
        return n;
    }
    if(start >= l && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return merge(query(2 * node + 1, start, mid, l, r), query(2 * node + 2, mid + 1, end, l, r));
}
 
int main()
{
    Assem99
    cin>>s;
    build(0, 0, sz(s) - 1);
    int q; cin>>q;
    while(q--)
    {
        int l, r; cin>>l>>r;
        cout<<query(0, 0, sz(s) - 1, l - 1, r - 1).mx<<endl;
    }
 
    return 0;
}
