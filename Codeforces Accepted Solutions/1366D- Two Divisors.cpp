#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e7 + 5, oo = 2e9;
const double pi = acos(-1);
using namespace std;
 
 
int prime[N];
void sieve()
{
    for(int i = 0; i < N; i++) prime[i] = i;
    for(int i = 2; i * i <= N; i++)
    {
        if(prime[i] == i)
        {
            for(int j = i * i; j <= N; j += i)
            {
                if(prime[j] == j) prime[j] = i;
            }
        }
    }
}
vector<int> getPrimes(int n)
{
    vector<int> vec;
    while(n != 1)
    {
        vec.push_back(prime[n]);
        n /= prime[n];
    }
    return vec;
}
 
 
int main()
{
    assem99
    sieve();
    int n; cin>>n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        vector<int> vec = getPrimes(a);
        int x = vec[0], y = 1;
        for(int j = 1; j < sz(vec); j++)
        {
            if(vec[j] == vec[0]) x *= vec[j];
            else y *= vec[j];
        }
        if(y == 1) v.push_back({-1, -1});
        else v.push_back({x, y});
    }
    for(auto it : v) cout<<it.first<<' ';
    cout<<endll;
    for(auto it : v) cout<<it.second<<' ';
    return 0;
}
