#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define RWFile freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e6 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    assem99
    string a, b; cin>>a>>b;
    int ans = 0, cnta4 = 0, cnta7 = 0, cntb4 = 0, cntb7 = 0;
    for(int i = 0; i < sz(a); i++)
    {
        cnta4 += a[i] == '4';
        cnta7 += a[i] == '7';
        cntb4 += b[i] == '4';
        cntb7 += b[i] == '7';
    }
    if(cnta4 != cntb4)
    {
        if(cntb4 > cnta4)
        {
            for(int i = 0; i < sz(a); i++)
            {
                if(a[i] == '7' and b[i] == '4' and cnta4 < cntb4)
                {
                    cnta4++;
                    ans++;
                    a[i] = '4';
                }
            }
        }
        else
        {
            for(int i = 0; i < sz(a); i++)
 
                if(a[i] == '4' and b[i] == '7' and cnta7 < cntb7)
                {
                    cnta7++;
                    ans++;
                    a[i] = '7';
                }
        }
    }
    int cnt = 0;
    for(int i = 0; i < sz(a); i++) cnt += (a[i] != b[i]);
    cout << ans + cnt / 2;
 
    return 0;
}
