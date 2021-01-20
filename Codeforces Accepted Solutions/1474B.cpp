#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

bool prime[N];
void sieve(int n)
{
    memset(prime, true, sizeof prime);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if ( prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;

}

int main()
{
    assem99
    vector<int> vec;
    sieve(1e6);
    for(int i = 2; i < 1e6; i++) if(prime[i]) vec.push_back(i);
    int t; cin>>t;
    while(t--)
    {
        int d; cin>>d;
        int first = lower_bound(vec.begin(), vec.end(), 1 + d) - vec.begin();
        int second = lower_bound(vec.begin(), vec.end(), vec[first] + d) - vec.begin();
        cout<<1LL * vec[first] * vec[second]<<endll;
    }

    return 0;
}