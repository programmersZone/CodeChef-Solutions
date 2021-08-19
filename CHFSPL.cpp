#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int min = b;
        if (a >= b && c >= b)
        {
            cout<<a + c<<endl;
        }
        else if (a>=c && b >= c)
        {
            cout<<a + b<<endl;
        }
        else
        {
            cout<<b + c<<endl;
        }
        
        
    }
}