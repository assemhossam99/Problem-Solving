#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5 + 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int tree[4 * N], arr[N];
 
void update(int node, int start, int end, int idx)
{
    if(start == end)
    {
        tree[node]++;
        return;
    }
    int mid = (start + end) / 2;
    if(idx > mid) update(2 * node + 2, mid + 1, end, idx);
    else update(2 * node + 1, start, mid, idx);
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
}
 
int query(int node, int start, int end, int l, int r)
{
    if(start < end || start > r || end < l) return 0;
    if(start >= l && end <= r) return tree[node];
    int mid = (start + end) / 2;
    return query(2 * node + 1, start, mid, l, r) + query(2 * node + 2, mid + 1, end, l, r);
}
 
int main()
{
    Assem99
    memset(arr, -1, sizeof arr);
    int n, t; cin>>n>>t;
    vector<int> vec;
    while(t--)
    {
        int k; cin>>k;
        k += query(0, 0, n, 1, k);
        int start = 1, end = n, mid, ans = -1;
        while(start <= end)
        {
            mid = (start + end) / 2;
            int zeroes;
            if(~arr[mid]) zeroes = mid - arr[mid];
            else
            {
                cout<<"? 1 "<<mid<<endl<<flush;
                int x;
                cin>>x;
                zeroes = mid - x;
                vec.push_back(mid);
                arr[mid] = x;
            }
            if(zeroes >= k)
            {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        cout<<"! "<<ans<<endl<<flush;
        update(0, 0, n, ans);
        for(auto it : vec) if(it >= ans) arr[it]++;
    }
 
    return 0;
}
