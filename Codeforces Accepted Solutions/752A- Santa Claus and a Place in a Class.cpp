#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, k, cntr = 1;
 
    cin >> n >> m >> k;
 
    for(int i = 1; i <= n; i++)
    {
 
        for(int j = 1; j <= m; j++)
        {
            if(cntr == k)
            {
                cout << i << ' ' << j << ' ' << 'L' << endl;
                return 0;
            }
            cntr++;
 
            if(cntr == k)
            {
                cout<<i<<' '<<j<<' '<<'R'<< endl;
                return 0;
            }
            cntr++;
        }
 
    }
    return 0;
}
