#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    //assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[2 * n + 5];
        for(int i = 0; i < 2 * n; i++) cin>>arr[i];
        sort(arr, arr + 2 * n);
        for(int i = 0; i < 2 * n - 1; i++)
        {
            vector<pair<int, int>> vec;
            multiset<int> st;
            int x = arr[i] + arr[2 * n - 1], start = x;
            for(int j = 0; j < 2 * n; j++) st.insert(arr[j]);
            for(int j = 0; j < n; j++)
            {
                int frst = *st.rbegin(), sec = x - frst;
                st.erase(st.find(frst));
                if(st.find(sec) == st.end()) break;
                st.erase(st.find(sec));
                vec.push_back({frst, sec});
                x = frst;
            }
            if(!sz(st))
            {
                cout<<"YES"<<endll<<start<<endll;
                for(auto it : vec) cout<<it.first<<' '<<it.second<<endll;
                goto A;
            }
        }
        cout<<"NO\n";
        A:;
    }

    return 0;
}