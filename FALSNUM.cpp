#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        string val;
        cin>>val;
        int size = val.size();
        if(val[0]=='1'){
            string temp = "1";
            temp = temp + "0" + val.substr(1,size-1);
            cout<<temp<<endl;
        }
        else
        {
            string temp = "1";
            temp = temp + val;
            cout<<temp<<endl;
        }
        
    }
    
}