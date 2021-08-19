#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        int no_of_elephants,total_candies;
        cin>>no_of_elephants>>total_candies;
        int arr[no_of_elephants];
        int candies_req=0;
        for (int i = 0; i < no_of_elephants; i++)
        {
           cin>>arr[i];
        }
        for (int i = 0; i < no_of_elephants; i++)
        {
            candies_req += arr[i];
        }
        if (candies_req <= total_candies)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
}