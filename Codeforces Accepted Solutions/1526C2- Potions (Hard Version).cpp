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
 
int main()
{
    Assem99
    int n; cin>>n;
    ll sum = 0, ans = 0;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        if(a >= 0) sum += a, ans++;
        else
        {
            if(sum + a >= 0)
            {
                sum += a;
                ans++;
                pq.push(abs(a));
            }
            else
            {
                if(sz(pq) && pq.top() > abs(a))
                {
                    int cur = pq.top();
                    pq.pop();
                    sum += cur;
                    sum += a;
                    pq.push(abs(a));
                }
            }
        }
    }
    cout<<ans;
 
    return 0;
}
