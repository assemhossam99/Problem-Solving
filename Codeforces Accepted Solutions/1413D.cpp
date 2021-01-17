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
    int n; cin>>n;
    int arr[n + 5];
    stack<pair<char, int>> stk;
    vector<pair<char, int>> vec;
    set<int> st;
    int id = 1;
    for(int i = 0; i < 2 * n; i++)
    {
        int x;
        char c; cin>>c;
        if(c == '-')
        {
            cin>>x;
            vec.push_back({c, x});
            if(stk.empty()) return cout<<"NO", 0;
            arr[stk.top().second] = x;
            stk.pop();
        }
        else
        {
            vec.push_back({c, -1});
            stk.push({c, id});
            id++;
        }
    }
    id = 1;
    for(int i = 0; i < 2 * n; i++)
    {
        if(vec[i].first == '+')
        {
            st.insert(arr[id]);
            id++;
        }
        else
        {
            if(*st.begin() != vec[i].second) return cout<<"NO", 0;
            st.erase(st.begin());
        }
    }
    cout<<"YES"<<endll;
    for(int i = 1; i <= n; i++) cout<<arr[i]<<' ';

    return 0;
}