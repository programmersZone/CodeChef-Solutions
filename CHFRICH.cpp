#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int A,B,X;
        cin>>A>>B>>X;
        int ans = (B - A) / X;
        cout<<ans<<endl;
    }
}