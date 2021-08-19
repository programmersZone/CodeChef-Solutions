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
        
        vector<string> forgotten(n);
        vector<string> mordernDay;

        for (int i = 0; i < n; i++)
        {
            cin>>forgotten[i];
        }
        
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin>>temp;
            for (int j = 0; j < temp; j++)
            {
                string a;
                cin>>a;
                mordernDay.push_back(a);
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            bool test = false;
            for (int j = 0; j < mordernDay.size(); j++)
            {
                if (forgotten[i] == mordernDay[j])
                {
                    test = true;
                    break;
                }
                
            }
            if (test == true)
            {
                cout<<"YES"<<" ";
            }
            else
            {
                cout<<"NO"<<" ";
            }
            
            
        }
        cout<<endl;

    }
}