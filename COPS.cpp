#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int m, x, y;
        cin>>m>>x>>y;

        int cops[m];

        for (int i = 0; i < m; i++)
        {
            cin>>cops[i];
        }
        
        bool isPresent[100] = {0};

        for (int j = 0; j < m; j++)
        {
            for (int i = cops[j]; i <= (cops[j] + x * y) && i <= 100; i++)
            {
                isPresent[i- 1] = 1;
            }
            for (int i = cops[j]; i >= (cops[j] - x * y) && i >= 0; i--)
            {
                isPresent[i - 1] = 1;
            }
            
        }
        
        int ans = 0;

        for (int i = 0; i < 100; i++)
        {
            if (isPresent[i] == false)
            {
                ans++;
            }
            
        }
        
        cout<<ans<<endl;
    }
    
}