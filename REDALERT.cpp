#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n,d,h;
        cin>>n>>d>>h;

        int arr[n];
        bool redAlert = false;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int current = 0;
        for (int i = 0; i < n; i++)
        {
            current += arr[i];
            if (current > h)
            {
                redAlert = true;
                break;
            }
            if (arr[i] == 0 && current <= d)
            {
                current = 0;
            } 
            else if (arr[i] == 0 && current > d)
            {
                current -= d;
            }
            
        }
        
        if (redAlert)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}