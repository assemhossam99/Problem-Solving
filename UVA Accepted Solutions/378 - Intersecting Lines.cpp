#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

int main()
{
    assem99
    int t; cin>>t;
    cout<<"INTERSECTING LINES OUTPUT"<<endll;
    while(t--)
    {
        ld x1, y1, x2, y2, x3, y3, x4, y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        ld slope1 = (y1 - y2) / (x1 - x2), slope2 = (y3 - y4) / (x3 - x4), x, y;
        ld c1 = (y1 - slope1 * x1), c2 = (y3 - slope2 * x3);
        if(x1 - x2 == 0 and x3 - x4 == 0) cout<<(x1 == x3? "LINE" : "NONE")<<endll;
        else if(x1 - x2 == 0)
        {
            cout<<"POINT ";
            x = x1;
            y = (slope2 * x) + c2;
            cout<<fixed<<setprecision(2)<<x<<' '<<y<<endll;
        }
        else if(x3 - x4 == 0)
        {
            cout<<"POINT ";
            x = x3;
            y = (slope1 * x) + c1;
            cout<<fixed<<setprecision(2)<<x<<' '<<y<<endll;
        }
        else if(slope1 == slope2) cout<<((x1 * slope2 + c2 == y1)? "LINE" : "NONE")<<endll;
        else
        {
            cout<<"POINT ";
            x = (c2 - c1) / (slope1 - slope2);
            y = (slope1 * x) + c1;
            cout<<fixed<<setprecision(2)<<x<<' '<<y<<endll;
        }
    }
    cout<<"END OF OUTPUT"<<endll;


    return 0;
}