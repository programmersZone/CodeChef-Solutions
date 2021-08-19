#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n,k;
        cin>>n>>k;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            if ((temp + k) % 7 == 0)
            {
                ans++;
            }
            
        }
        
        cout<<ans<<endl;
    }
}