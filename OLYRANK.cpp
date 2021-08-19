#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while (test--)
    {
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        if (g1+ s1+ b1 > g2 + s2 +b2)
        {
            cout<<1<<endl;
        }
        else 
        {
            cout<<2<<endl;
        }
        
    }
    
}