#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;

        cpp_int fact = 1;
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        cout<<fact<<endl;
    }
    
}