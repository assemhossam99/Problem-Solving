#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
map<int, int> mp, d;
int arr[N];
vector<int> vec;
ll ans = 0;
void bfs(int m)
{
    queue<int> q;
    for(auto it : mp) q.push(it.first);
    while(sz(q))
    {
        if(sz(vec) == m) return;
        int curNode = q.front();
        q.pop();
        if(d[curNode])
        {
            ans += d[curNode];
            vec.push_back(curNode);
        }
        if(!mp[curNode + 1])
        {
            mp[curNode + 1]++;
            q.push(curNode + 1);
            d[curNode + 1] = d[curNode] + 1;
        }
        if(!mp[curNode - 1])
        {
            mp[curNode - 1]++;
            q.push(curNode - 1);
            d[curNode - 1] = d[curNode] + 1;
        }
    }
}
 
int main()
{
    assem99
    int n, m; cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        d[arr[i]] = 0;
    }
    bfs(m);
    cout<<ans<<endll;
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
