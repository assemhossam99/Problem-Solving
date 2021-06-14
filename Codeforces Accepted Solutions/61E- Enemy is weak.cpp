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
 
int arr[N];
vector<int> tree[4 * N];
 
vector<int> merge(vector<int> &a, vector<int> &b)
{
    vector<int> vec;
    int i = 0, j = 0;
    while(i < sz(a) && j < sz(b))
    {
        if(a[i] <= b[j]) vec.push_back(a[i++]);
        else vec.push_back(b[j++]);
    }
    while (i < sz(a)) vec.push_back(a[i++]);
    while (j < sz(b)) vec.push_back(b[j++]);
    return vec;
}
 
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node].push_back(arr[start]);
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
    tree[node] = merge(tree[2 * node + 1], tree[2 * node + 2]);
}
 
int query(int node, int start, int end, int l, int r, int val)
{
    if(start > end || start > r || end < l) return 0;
    if(start >= l && end <= r)
    {
        return sz(tree[node]) - (upper_bound(tree[node].begin(), tree[node].end(), val) - tree[node].begin());
    }
    int mid = (start + end) / 2;
    return query(2 * node + 1, start, mid, l, r, val) + query(2 * node + 2, mid + 1, end, l, r, val);
}
 
int main()
{
    Assem99
    int n; cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    build(0, 0, n - 1);
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        int l = query(0, 0, n - 1, 0, i - 1, arr[i]);
        int r = (n - (1 + i)) - query(0, 0, n - 1, i + 1, n - 1, arr[i]);
        ans += (1LL * l * r);
    }
    cout<<ans;
 
    return 0;
}
