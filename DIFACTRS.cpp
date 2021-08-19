#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    vector<int> arr;
    if (n==1)
    {
        cout<<1<<endl<<1<<endl;
    }
    else
    {
        
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                arr.push_back(i);
            }
            
        }
        arr.push_back(n);
        cout<<count+1<<endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr.at(i)<<" ";
        }
    }
    
    return 0;
}