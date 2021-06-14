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
 
int l[N], r[N], q[N], pref[N], tree[4 * N], arr[N];
 
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
    tree[node] = tree[2 * node + 1] & tree[2 * node + 2];
}
 
int query(int node, int start, int end, int left, int right)
{
    if (right < start || left > end) return (1LL << 30) - 1;
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return query(2 * node + 1, start, mid, left, right) & query(2 * node + 2, mid + 1, end, left, right);
}
int main()
{
    Assem99
    int n, m; cin>>n>>m;
    for(int i = 0; i < m; i++) cin>>l[i]>>r[i]>>q[i];
    for(int i = 0; i < 30; i++)
    {
        for(int j = 0; j < n; j++) pref[j] = 0;
        for(int j = 0; j < m; j++)
        {
            if((q[j] >> i) & 1)
            {
                pref[l[j] - 1]++;
                pref[r[j]]--;
            }
        }
        for(int j = 1; j <= n; j++) pref[j] += pref[j - 1];
        for(int j = 0; j < n; j++)
        {
            if(pref[j] > 0) arr[j] |= (1 << i);
        }
    }
    build(0, 0, n - 1);
    for(int i = 0; i < m; i++)
    {
        if(query(0, 0, n - 1, l[i] - 1, r[i] - 1) != q[i]) return cout<<"NO", 0;
    }
    cout<<"YES"<<endl;
    for(int i = 0; i < n; i++) cout<<arr[i]<<' ';
 
    return 0;
}
