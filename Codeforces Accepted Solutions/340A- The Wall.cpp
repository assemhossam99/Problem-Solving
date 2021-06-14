#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 9, N = 1e7 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
ll gcd(ll a, ll b)
{
    if (!a)return b;
    return gcd(b % a, a);
}
 
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
 
int main()
{
    assem99
    int x, y, a, b; cin>>x>>y>>a>>b;
    int n = lcm(x, y);
    cout << (b / n) - ((a - 1) / n);
 
 
    return 0;
}
