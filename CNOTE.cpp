#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        int pages[N];
        int cost[N];
        
        for (int i = 0; i < N; i++)
        {
            cin>>pages[i];
            cin>>cost[i];
        }

        int pagesLeft = X - Y;
        bool test = false;

        for (int i = 0; i < N; i++)
        {
            if (pagesLeft <= pages[i] && cost[i] <= K)
            {
                test = true;
                break;
            }
            
        }
        if (test == true) {
            cout<<"LuckyChef"<<endl;
        } 
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
    }
}