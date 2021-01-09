#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        set<ld> st;
        int n; cin>>n;
        ld arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                st.insert(0.5 * (arr[j] - arr[i]));
            }
        }
        cout<<sz(st)<<endll;
    }

    return 0;
}