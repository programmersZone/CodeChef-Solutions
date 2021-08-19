#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n,a;
        cin>>n>>a;
        int o = sqrt(n);
        cout<<o * a<<endl;
    }
}