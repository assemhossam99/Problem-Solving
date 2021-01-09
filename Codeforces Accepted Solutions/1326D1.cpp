#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in.txt","r",stdin); freopen("string.out.txt","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 998244353, N = 5e3 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;

string s;
bool palindrome(string t)
{
    int i = 0, j = sz(t) - 1;
    while(i <= j)
    {
        if(t[i] != t[j]) return false;
        i++, j--;
    }
    return true;
}

int main()
{
    assem99
    int t; cin>>t;
    while(t--)
    {
        cin>>s;
        if(palindrome(s))
        {
            cout<<s<<endll;
            continue;
        }
        string tmp = "", ans = "";
        int length = 0, lenAns = 0;
        for(int i = 0; i < sz(s); i++)
        {
            tmp += s[i];
            if(palindrome(tmp) and sz(tmp) > length)
            {
                length = sz(tmp);
            }
        }
        ans = s.substr(0, length);
        lenAns = length;
        tmp = "";
        length = 0;
        for(int i = sz(s) - 1; i >= 0; i--)
        {
            tmp += s[i];
            if(palindrome(tmp) and sz(tmp) > length)
            {
                length = sz(tmp);
            }
        }
        if(lenAns < length)
        {
            reverse(s.begin(), s.end());
            ans = s.substr(0, length);
            reverse(s.begin(), s.end());
        }
        length = 0;
        tmp = "";
        string a = "", b = "";
        int i = 0, j = sz(s) - 1;
        while(i <= j)
        {
            if(s[i] == s[j] and i != j) b += s[j], a += s[i], i++, j--, length += 2;
            else if(s[i] == s[j] and i == j) a += s[i], i++, j--, length++;
            else break;
        }
        reverse(b.begin(), b.end());
        if(i > j)
        {
            reverse(b.begin(), b.end());
            cout<<a + b<<endll;
        }
        else
        {
            int len = 0, mxLen = 0;
            string curAns = "";
            for(int ii = i; ii <= j; ii++)
            {
                tmp += s[ii];
                if(palindrome(tmp) and sz(tmp) > len)
                {
                    len = sz(tmp);
                }
            }
            curAns = s.substr(i, len);
            mxLen = len;
            tmp = "";
            len = 0;
            for(int ii = j; ii >= i; ii--)
            {
                tmp += s[ii];
                if(palindrome(tmp) and sz(tmp) > len)
                {
                    len = sz(tmp);
                }
            }
            if(len > mxLen)
            {
                int cnt = len;
                mxLen = len;
                curAns = "";
                for(int ii = j; ii >= i and len; ii--) curAns += s[ii], len--;
                reverse(curAns.begin(), curAns.end());
            }
            if(sz(a) + sz(b) + sz(curAns) > lenAns) cout<<a + curAns + b<<endll;
            else cout<<ans<<endll;
        }
    }


    return 0;
}