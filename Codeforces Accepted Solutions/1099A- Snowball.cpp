#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int arr[N];
 
int main()
{
    assem99
    int w, h, w1, h1, w2, h2; cin>>w>>h>>w1>>h1>>w2>>h2;
    while(h >= 0)
    {
        w += h;
        if(h1 == h) w -= w1;
        if(h2 == h) w -= w2;
        if(w < 0) w = 0;
        h--;
    }
    cout<<w;
 
    return 0;
}
