#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        int ans = 0;

        while (n > 0)
        {
            int rem = n % 10;
            ans = ans * 10 + rem;
            n /= 10;
        }
        
        cout<<ans<<endl;
    }
    
}