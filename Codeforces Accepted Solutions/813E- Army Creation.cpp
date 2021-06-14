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
 
int n, k, arr[N];
vector<int> tree[4 * N], vec;
map<int, vector<int>> mp;
 
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node].push_back(vec[start]);
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
    for(auto it : tree[2 * node + 1]) tree[node].push_back(it);
    for(auto it : tree[2 * node + 2]) tree[node].push_back(it);
    sort(tree[node].begin(), tree[node].end());
}
 
int query(int node, int start, int end, int l, int r)
{
    if(start > end || start > r || end < l) return 0;
    if(start >= l && end <= r) return lower_bound(tree[node].begin(), tree[node].end(), l) - tree[node].begin();
    int mid = (start + end) / 2;
    return query(2 * node + 1, start, mid, l, r) + query(2 * node + 2, mid + 1, end, l, r);
}
 
int main()
{
    Assem99
    cin>>n>>k;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        if(sz(mp[a]) >= k) vec.push_back(mp[a][sz(mp[a]) - k]);
        else vec.push_back(-1e9);
        mp[a].push_back(i);
    }
    build(0, 0, n - 1);
    int q; cin>>q;
    int last = 0;
    while(q--)
    {
        int x, y; cin>>x>>y;
        int l = ((x + last) % n), r = ((y + last) % n);
        if(l > r) swap(l, r);
        last = query(0, 0, n - 1, l, r);
        cout<<last<<endl;
    }
 
    return 0;
}
