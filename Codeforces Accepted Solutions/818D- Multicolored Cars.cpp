#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int freq[N];
 
int main()
{
    Assem99
    int n, a; cin>>n>>a;
    for(int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x != a && freq[x] < freq[a]) freq[x] = 0;
        else freq[x]++;
    }
    for(int i = 0; i < N; i++) if(freq[i] < freq[a]) freq[i] = 0;
    for(int i = 0; i < N; i++) if(freq[i] && i != a) return cout<<i, 0;
    cout<<-1;
 
    return 0;
}
