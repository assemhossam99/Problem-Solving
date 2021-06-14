#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endl '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 2e5+ 5, oo = 1e9, mod = 1e9 + 7;
const double pi = acos(-1);
using namespace std;
 
int main()
{
    Assem99
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        for(char i = 'a'; i <= 'z'; i++)
        {
            string a;
            a.push_back(i);
            if(s.find(a) == -1)
            {
                cout<<a<<endl;
                goto done;
            }
        }
        for(char i = 'a'; i <= 'z'; i++)
        {
            for(char j = 'a'; j <= 'z'; j++)
            {
                string a = "";
                a.push_back(i);
                a.push_back(j);
                if(s.find(a) == -1)
                {
                    cout<<a<<endl;
                    goto done;
                }
            }
        }
        for(char i = 'a'; i <= 'z'; i++)
        {
            for(char j = 'a'; j <= 'z'; j++)
            {
                for(char k = 'a'; k <= 'z'; k++)
                {
                    string a = "";
                    a.push_back(i);
                    a.push_back(j);
                    a.push_back(k);
                    if(s.find(a) == -1)
                    {
                        cout<<a<<endl;
                        goto done;
                    }
                }
            }
        }
        done:;
    }
 
    return 0;
}
