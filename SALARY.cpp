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
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            arr[i] = temp;
            mini = min(mini,temp);
        }
        
        int minMoves = 0;

        for (int i = 0; i < n; i++)
        {
            minMoves += (arr[i] - mini);
        }
        cout<<minMoves<<endl;

    }
}