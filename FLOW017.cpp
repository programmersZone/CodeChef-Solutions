#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while (test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if (a > b && a > c)
        {
            if (c > b)
            {
                cout<<c<<endl;
            }
            else
            {
                cout<<b<<endl;
            }
            
            
        }
        else if (b > a && b > c)
        {
            if (a > c)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<c<<endl;
            }
            
        }
        else
        {
            if (a > b)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<b<<endl;
            }
            
            
        }
        
        
        
    }
    
}