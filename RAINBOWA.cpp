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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int i = 0;
        int j = n-1;
        bool test = true;

        while (i < j)
        {
            if (arr[i] != arr[j])
            {
                test = false;
                break;
            }
            if (arr[i] != arr[i + 1] && arr[i + 1] != arr[i] + 1)
            {
                test = false;
                break;
            }
            i++;
            j--;
        }
        if (arr[i] != 7)
        {
            test = false;
        }

        if (arr[0] != 1)
        {
            test = false;
        }
        
        
        if (test)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
    
}