#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;

    while (test--)
    {
        int a,b;
        cin>>a>>b;

        if (a % 2 == 0 && b % 2 == 0 || __gcd(a,b) > 1) 
        {
            cout<<0<<endl;
        }
        else if (a % 2 == 0 || b % 2 == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            if (__gcd(a+1,b) > 1 || __gcd(a, b+1) > 1)
            {
                cout<<1<<endl;
            } else
            {
                cout<<2<<endl;
            }
            
            
        }
        
                
    }
    
}