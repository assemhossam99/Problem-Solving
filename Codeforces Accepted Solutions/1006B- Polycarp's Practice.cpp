#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 3e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int n, k; cin>>n>>k;
    vector<int> vec;
    multiset<int> st;
    int arr[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    sort(vec.rbegin(), vec.rend());
    vec.clear();
    int cnt = 0;
    ll sum = 0;
    for(int i = 0; i < k; i++) st.insert(vec[i]);
    for(int i = 0; i < n; i++)
    {
        if(k == 1)
        {
            sum += *st.begin();
            vec.push_back(n - i);
            break;
        }
        cnt++;
        if(st.find(arr[i]) != st.end())
        {
            sum += arr[i];
            vec.push_back(cnt);
            cnt = 0;
            st.erase(st.find(arr[i]));
            k--;
        }
    }
    cout<<sum<<endl;
    for(auto it : vec) cout<<it<<' ';
 
    return 0;
}
