#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans = 0;
        sort(arr.begin(),arr.end());
        int repeat = 0;

        for (int i = 0; i < n - 1; i++)
        {
            while (arr[i] == arr [i+1])
            {
                repeat++;
                i++;
                if (i > n - 1)
                {
                    break;
                }
                
            }
            
        }
        cout<< n * (n-1) - repeat - 1<<endl;
        
    }
}