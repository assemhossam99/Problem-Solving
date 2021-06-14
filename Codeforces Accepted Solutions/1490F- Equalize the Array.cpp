#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int arr[N];
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<int, int> freq, ff;
        multiset<int> st;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        for(auto it : freq)
        {
            st.insert(it.second);
            ff[it.second]++;
        }
        vector<int> vec;
        for(auto it : st) vec.push_back(it);
        ll last = 0;
        vector<int> ans(sz(vec), 0);
        for(int i = 0; i < sz(vec); i++)
        {
            if(i and vec[i] == vec[i - 1])
            {
                ans[i] = ans[i - 1];
                ans[i - 1] = oo;
                continue;
            }
            ans[i] = last;
            last += ff[vec[i]] * vec[i];
        }
        last = 0;
        for(int i = sz(vec) - 1; i >= 0; i--)
        {
            if(i != sz(vec) - 1 and vec[i] == vec[i + 1])
            {
                ans[i] = oo;
                continue;
            }
            ans[i] += (last - (vec[i] * (sz(vec) - i - 1)));
            last += ff[vec[i]] * vec[i];
        }
        ll fans = 1e18;
        for(int i = 0; i < sz(ans); i++) fans = min(fans, 1LL * ans[i]);
        cout<<fans<<endll;
    }
 
    return 0;
}
