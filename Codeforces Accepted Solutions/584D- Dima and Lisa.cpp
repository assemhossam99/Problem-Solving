#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
 
bool isPrime(int n)
{
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
    return true;
}
 
int main()
{
    Assem99
    int n; cin>>n;
    if(isPrime(n)) cout<<1<<endll<<n;
    else if(isPrime(n - 2)) cout<<2<<endll<<2<<' '<<n - 2;
    else if(isPrime(n - 3)) cout<<2<<endll<<3<<' '<<n - 3;
    else
    {
        cout<<3<<endll<<3<<' ';
        for(int i = 2; i <= n; i++)
        {
            if(isPrime(i) and isPrime((n - 3) - i)) return cout<<i<<' '<<(n - 3) - i, 0;
        }
    }
 
    return 0;
}
