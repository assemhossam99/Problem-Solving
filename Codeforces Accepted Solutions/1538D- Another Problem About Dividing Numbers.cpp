#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 6e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int solve(int a)
{
    int ret = 0;
    while(a % 2 == 0) a /= 2, ret++;
    //while(b % 2 == 0) b /= 2, ret++;
    for(int i = 3; i * i <= a; i++)
    {
        while(a % i == 0) a /= i, ret++;
        //while(b % i == 0) b /= i, ret++;
    }
    ret += (a > 1);
    //ret += (b > 1);
    return ret;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int a, b, k; cin>>a>>b>>k;
        if((k == 1 && a == b) || (k == 1 && max(a, b) % min(a, b))) cout<<"NO"<<endl;
        else
        {
            int ans = solve(a) + solve(b);
            if(ans < k) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
 
    return 0;
}
