#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 31, p2 = 37;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    set<pair<int, int>> st[3];
    int n; cin>>n;
    int p[n + 5], f[n + 5], b[n + 5];
    for(int i = 0; i < n; i++) cin>>p[i];
    for(int i = 0; i < n; i++)
    {
        cin>>f[i];
        st[f[i] - 1].insert({p[i], i});
    }
    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
        st[b[i] - 1].insert({p[i], i});
    }
    int q; cin>>q;
    while(q--)
    {
        int a; cin>>a; a--;
        if(!sz(st[a])) cout<<-1<<' ';
        else
        {
            cout<<st[a].begin()->first<<' ';
            pair<int, int> cur = *st[a].begin();
            for(int i = 0; i < 3; i++) if(st[i].find(cur) != st[i].end()) st[i].erase(st[i].find(cur));
        }
    }
 
    return 0;
}
