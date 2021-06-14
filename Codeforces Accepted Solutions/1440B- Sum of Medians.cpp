#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 6e5+ 5, mod = 1e9 + 7;
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n, k; cin>>k>>n;
        deque<int> vec;
        for(int i = 0; i < n * k; i++)
        {
            int a; cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
        ll ans = 0;
        while(n--)
        {
            for(int i = 0; i < k; i++)
            {
                if(i == k / 2) ans += vec.back();
                if(i > k / 2) vec.pop_front();
                else vec.pop_back();
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
