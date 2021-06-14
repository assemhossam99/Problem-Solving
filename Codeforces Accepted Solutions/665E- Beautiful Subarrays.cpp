#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int N = 1e6 + 5, oo = 1e9;
const ll MOD = 1e9 + 7, MOD2 = 1e9 + 9, p1 = 1000003, p2 = 1000033;
const double pi = acos(-1);
using namespace std;
 
int n, k, p;
 
struct trie
{
    int cnt;
    trie *ptr[2];
    trie()
    {
        memset(ptr, 0, sizeof ptr);
        cnt = 0;
    }
} *root;
 
void add(int x)
{
    trie *node = root;
    for(int i = 31; i >= 0; i--)
    {
        bool mnwr = (x & (1 << i));
        if(!node->ptr[mnwr]) node->ptr[mnwr] = new trie();
        node = node->ptr[mnwr];
        node->cnt++;
    }
}
 
ll query(int x)
{
    trie *node = root;
    ll ret = 0;
    for(int i = 31; i >= 0; i--)
    {
        bool mnwrYaK = (k & (1 << i)), mnwrYaX = (x & (1 << i));
        if(mnwrYaK)
        {
            if(mnwrYaX)
            {
                if(!node->ptr[0]) break;
                node = node->ptr[0];
            }
            else
            {
                if(!node->ptr[1]) break;
                node = node->ptr[1];
            }
        }
        else
        {
            if(mnwrYaX)
            {
                if(node->ptr[0]) ret += node->ptr[0]->cnt;
                if(!node->ptr[1]) break;
                node = node->ptr[1];
            }
            else
            {
                if(node->ptr[1]) ret += node->ptr[1]->cnt;
                if(!node->ptr[0]) break;
                node = node->ptr[0];
            }
        }
    }
    return ret;
}
 
int main()
{
    Assem99
    root = new trie();
    cin>>n>>k; k--;
    ll ans = 0;
    add(0);
    for(int i = 0; i < n; i++)
    {
        int a; cin>>a;
        p ^= a;
        ans += query(p);
        add(p);
    }
    cout<<ans;
 
    return 0;
}
