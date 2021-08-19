#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;

    while (test--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while (n > 0)
        {
            int rem = n % 10;
            n /= 10;
            sum += rem;
        }
        cout<<sum<<endl;
    }
}