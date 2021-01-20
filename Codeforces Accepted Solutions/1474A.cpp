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

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        char last = '*';
        for(int i = 0; i < n; i++)
        {
            if(!i)
            {
                if(s[i] == '0') last = '1', cout<<1;
                else if(s[i] == '1') last = '2', cout<<1;
            }
            else
            {
                if(s[i] == '0')
                {
                    if(last == '2') cout<<1, last = '1';
                    else if(last == '1') cout<<0, last = '0';
                    else if(last == '0') cout<<1, last = '1';
                }
                else
                {
                    if(last == '2') cout<<0, last = '1';
                    else if(last == '1') cout<<1, last = '2';
                    else if(last == '0') cout<<1, last = '2';
                }
            }
        }
        cout<<endll;
    }

    return 0;
}