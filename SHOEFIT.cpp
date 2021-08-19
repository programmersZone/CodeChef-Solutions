#include<iostream>
using namespace std;

int main(){
    
    int tests;
    cin>>tests;

    while (tests--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        int left = 0, right = 0;
        if (a == 0)
        {
            left++;
        }
        else
        {
            right++;
        }
        if (b==0)
        {
            left++;
        }
        else
        {
            right++;
        }
        if (c==0)
        {
            left++;
        }
        else
        {
            right++;
        }
        
        if (left == 3 || right == 3)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
        
        
    }
    
}