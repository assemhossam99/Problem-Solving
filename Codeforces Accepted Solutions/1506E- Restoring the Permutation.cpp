#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 5e5 + 5, oo = 1e9;
const ll mod = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i];
        set<int> s, st1, st2;
        for(int i = 0; i < n; i++)
        {
            if(!i || (i && arr[i] != arr[i - 1])) s.insert(arr[i]);
        }
        for(int i = 1; i <= n; i++)
        {
            if(s.find(i) == s.end()) st1.insert(i), st2.insert(i);
        }
        for(int i = 0; i < n; i++)
        {
            if(!i || (i && arr[i] != arr[i - 1])) cout<<arr[i]<<' ';
            else
            {
                cout<<*st1.begin()<<' ';
                st1.erase(st1.begin());
            }
        }
        cout<<endl;
        int cur;
        for(int i = 0; i < n; i++)
        {
            if(!i || (i && arr[i] != arr[i - 1])) cout<<arr[i]<<' ', cur = arr[i];
            else
            {
                auto it = st2.lower_bound(cur);
                it--;
                cout<<*it<<' ';
                st2.erase(it);
            }
        }
        cout<<endl;
    }
 
    return 0;
}
