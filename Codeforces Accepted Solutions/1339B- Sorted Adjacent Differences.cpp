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
    int t; cin>>t;
    while(t--)
    {
        vector<int> vec;
        int n; cin>>n;
        multiset<int> sst;
        multiset<int, greater<int>> gst;
        for(int i = 0; i < n; i++)
        {
            int a; cin>>a;
            sst.insert(a);
            gst.insert(a);
        }
        int last = *gst.begin();
        vec.push_back(*sst.begin());
        vec.push_back(*gst.begin());
        sst.erase(sst.find(*gst.begin()));
        gst.erase(gst.find(*sst.begin()));
        sst.erase(sst.begin());
        gst.erase(gst.begin());
        while(sz(sst))
        {
            int l = *sst.begin(), r = *gst.begin();
            if(abs(last - l) > abs(last - r))
            {
                vec.push_back(l);
                last = l;
                gst.erase(gst.find(l));
                sst.erase(sst.find(l));
            }
            else
            {
                vec.push_back(r);
                last = r;
                sst.erase(sst.find(r));
                gst.erase(gst.find(r));
            }
        }
        reverse(vec.begin(), vec.end());
        for(auto it : vec) cout<<it<<' ';
        cout<<endl;
    }
 
    return 0;
}
