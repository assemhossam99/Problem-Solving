#include <bits/stdc++.h>
#define Assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define File freopen("string.in","r",stdin); freopen("string.out","w",stdout);
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 1e4 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int n, dp[N];
string s, arr[100005];
vector<int> vec;
 
struct trie
{
    trie *ptr[26];
    int idx;
    trie()
    {
        idx = -1;
        memset(ptr, 0, sizeof ptr);
    }
} *root;
 
void add(string str, int id)
{
    trie *node = root;
    for(int i = 0; i < sz(str); i++)
    {
        if(node->ptr[str[i] - 'a'] == 0)
        {
            node->ptr[str[i] - 'a'] = new trie();
        }
        node = node->ptr[str[i] - 'a'];
    }
    node->idx = id;
}
 
int solve(int idx)
{
    if(idx == n) return 1;
    if(~dp[idx]) return dp[idx];
    trie *node = root;
    for(int i = idx; i < sz(s); i++)
    {
        if(!node->ptr[s[i] - 'a']) return dp[idx] = 0;
        node = node->ptr[s[i] - 'a'];
        if(node->idx != -1 and solve(i + 1))
        {
            vec.push_back(node->idx);
            return dp[idx] = true;
        }
    }
    return dp[idx] = 0;
}
 
int main()
{
    Assem99
    root = new trie();
    memset(dp, -1, sizeof dp);
    cin>>n>>s;
    int q; cin>>q;
    for(int i = 0; i < q; i++)
    {
        cin>>arr[i];
        reverse(arr[i].begin(), arr[i].end());
        string tmp = arr[i];
        for(auto &it : tmp) it = tolower(it);
        add(tmp, i);
    }
    solve(0);
    reverse(vec.begin(), vec.end());
    for(int i = 0; i < q; i++) reverse(arr[i].begin(), arr[i].end());
    for(auto it : vec)
    {
        cout<<arr[it]<<' ';
    }
 
    return 0;
}
