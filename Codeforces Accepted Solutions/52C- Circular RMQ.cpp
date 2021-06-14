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
 
ll n, arr[2 * N], tree[5 * N], lazy[5 * N];
 
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    build(node * 2 + 1, start, mid);
    build(node * 2 + 2, mid + 1, end);
    tree[node] = min(tree[node * 2 + 1], tree[node * 2 + 2]);
}
 
void update(int node, int start, int end, int l, int r, int val)
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
    if(start > r || end < l) return;
    if(start >= l && end <= r)
    {
        tree[node] += val;
        if(start != end)
        {
            lazy[node * 2 + 1] += val;
            lazy[node * 2 + 2] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    update(2 * node + 1, start, mid, l, r, val);
    update(2 * node + 2, mid + 1, end, l, r, val);
    tree[node] = min(tree[node * 2 + 1], tree[node * 2 + 2]);
}
 
ll query(int node, int start, int end, int l, int r)
{
    if(start > r || end < l) return 1e9;
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
    if(start >= l && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return min(query(2 * node + 1, start, mid, l, r), query(2 * node + 2, mid + 1, end, l, r));
}
 
int main()
{
    Assem99
    cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    build(0, 0, n - 1);
    int q; cin>>q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin, s);
        vector<int> vec;
        stringstream ss;
        ss << s;
        int x = 0;
        while(ss >> x) vec.push_back(x);
        if(sz(vec) == 2)
        {
            int l = vec[0], r = vec[1];
            if(r < l) cout<<min(query(0, 0, n - 1, 0, r), query(0, 0, n - 1, l, n - 1))<<endl;
            else cout<<query(0, 0, n - 1, l, r)<<endl;
        }
        else
        {
            int l = vec[0], r = vec[1], v = vec[2];
            if(r < l)
            {
                update(0, 0, n - 1, 0, r, v);
                update(0, 0, n - 1, l, n - 1, v);
            }
            else update(0, 0, n - 1, l, r, v);
        }
    }
 
    return 0;
}
