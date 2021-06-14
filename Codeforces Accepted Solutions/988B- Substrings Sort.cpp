#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#define assem99 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
 
using namespace std;
 
int main()
{
 assem99;
 
 int n, cntr = 1;
 string s;
 vector<pair<int, string>> v;
 cin >> n;
 
 for (int i = 0; i < n; i++)
 {
  cin >> s;
  v.push_back(make_pair(s.size(), s));
 }
 
 sort(v.begin(), v.end());
 
 for (int i = 0; i < v.size() - 1; i++)
 {
  for (int j = 0; j < v[i + 1].second.size(); j++)
  {
   if (v[i].second == v[i + 1].second.substr(j, v[i].first))
   {
    cntr++;
    break;
   }
  }
 }
 
 if (cntr == n)
 {
  cout << "YES" << endl;
  for (int i = 0; i < v.size(); i++)
  {
   cout << v[i].second << endl;
  }
 }
 else
  cout << "NO";
 
 return 0;
}
