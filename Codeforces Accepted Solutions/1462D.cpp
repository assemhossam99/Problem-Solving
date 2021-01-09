#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 1e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

bool vis[20];

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n + 5];
        int mx = 0, total = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mx = max(mx, arr[i]);
            total += arr[i];
        }
        int sum = 0;
        int done = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            int cur = 0;
            for(int j = i + 1; j < n; j++)
            {
                cur += arr[j];
                if(j == n - 1 and cur == sum)
                {
                    done = sum;
                    goto A;
                }
                if(cur > sum)
                {
                    break;
                }
                else if(cur == sum) cur = 0;
            }
        }
        A:;
        int num = total / sum;
        cout<<n - num<<endll;
    }

    return 0;
}