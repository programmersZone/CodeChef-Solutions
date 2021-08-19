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
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        long long vec[32];
        memset(vec,0,sizeof(vec));
        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vec[i] += (1 & (arr[j]>>i));
            }
            
        }
        for (int i = 0; i < 32; i++)
        {
            ans+=ceil(vec[i]/(float)k);
        }
        cout<<ans<<endl;
    }
}