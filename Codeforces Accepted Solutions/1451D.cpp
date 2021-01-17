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

ld getDist(ld x, ld y)
{
    return sqrt(x * x + y * y);
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        ld d, k; cin>>d>>k;
        int mxi = 0;
        for(int i = 0; i <= d; i += k)
        {
            if(getDist(i, i) <= d) mxi = i;
            else break;
        }
        if(getDist(mxi, mxi + k) <= d) cout<<"Ashish"<<endll;
        else cout<<"Utkarsh"<<endll;
    }

    return 0;
}