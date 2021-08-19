#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
            int arr[10] = {0};
            for (int i = 0; i < 4; i++)
            {
                int temp;
                cin>>temp;
                arr[temp-1]++;
            }
            
            bool triplet = false;
            int numOfDistinct = 0;

            for (int i = 0; i < 10; i++)
            {
                if (arr[i] != 0)
                {
                    numOfDistinct++;
                }
                if (arr[i] == 3)
                {
                    triplet = true;
                }
                
            }
            
            if (numOfDistinct == 1)
            {
                cout<<0<<endl;
            }
            else if (numOfDistinct == 2 && triplet)
            {
                cout<<1<<endl;
            }
            else 
            {
                cout<<2<<endl;
            }
        
    }
}