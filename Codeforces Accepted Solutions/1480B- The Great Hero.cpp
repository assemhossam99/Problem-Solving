#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e5 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int A, H, n; cin>>A>>H>>n;
        pair<int, int> arr[n + 5];
        for(int i = 0; i < n; i++) cin>>arr[i].first;
        for(int i = 0; i < n; i++) cin>>arr[i].second;
        sort(arr, arr + n);
        for(int i = 0; i < n; i++)
        {
            if(H <= 0 )
            {
                cout<<"NO"<<endll;
                goto A;
            }
            int roundsToKillMonster = arr[i].second / A + (arr[i].second % A != 0), roundsToKillHero = H / arr[i].first + (H % arr[i].first != 0);
            if(roundsToKillHero >= roundsToKillMonster) H -= roundsToKillMonster * arr[i].first;
            else
            {
                cout<<"NO"<<endll;
                goto A;
            }
        }
        cout<<"YES"<<endll;
        A:;
    }
 
    return 0;
}
