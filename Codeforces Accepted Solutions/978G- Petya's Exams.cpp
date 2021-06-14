#include <bits/stdc++.h>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define endll '\n'
#define sz(a) (int)(a).size()
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
int dx[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dy[] = { -1, 0, 1, 0, 1, -1, -1, 1 };
const int MOD = 1e9 + 7, N = 2e5 + 5, oo = 1e9;
const double pi = acos(-1);
using namespace std;
 
int arr[105], brr[105], crr[105], cnt[105];
 
int main()
{
    assem99
    int n, m; cin>>n>>m;
    vector<pair<int, int>>exams;
    vector<int> ans;
    vector<pair<int, pair<int, int>>> vec;
    for(int i = 1; i <= m; i++)
    {
        cin>>arr[i]>>brr[i]>>crr[i];
        exams.push_back({brr[i], i});
        vec.push_back({brr[i], {arr[i], i}});
    }
    bool ok = true;
    sort(exams.rbegin(), exams.rend());
    sort(vec.rbegin(), vec.rend());
    for(int i = 1; i <= n; i++)
    {
        if(exams[sz(exams) - 1].first == i)
        {
            if(cnt[exams[sz(exams) - 1].second] == crr[exams[sz(exams) - 1].second])
            {
                ans.push_back(m + 1);
                exams.pop_back();
            }
            else ok = false;
        }
        else
        {
            //while(sz(vec) and cnt[vec[sz(vec) - 1].second] == crr[vec[sz(vec) - 1].second]) vec.pop_back();
            if(sz(vec))
            {
                for(int j = sz(vec) - 1; j >= 0; j--)
                {
                    if(i >= vec[j].second.first and i < vec[j].first and ~vec[j].second.second)
                    {
                        ans.push_back(vec[j].second.second);
                        cnt[vec[j].second.second]++;
                        if(cnt[vec[j].second.second] == crr[vec[j].second.second]) vec[j].second.second = -1;
                        goto A;
                    }
                }
                ans.push_back(0);
            }
            else ans.push_back(0);
            A:;
        }
    }
    if(!ok) cout<<"-1";
    else for(auto it : ans) cout<<it<<' ';
    return 0;
}
