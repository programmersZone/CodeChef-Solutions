#include<iostream>
#include<string>
using namespace std;

int main(){

    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        string time;
        getline(cin,time);
        int no;
        cin>>no;
        while (no--)
        {
            string str;
            getline(cin,str);

            if (time[6]==str[6])
            {
                if (time.substr(0,2)<str.substr(0,2) && time.substr(0,2)<str.substr(0,2))
                {
                    cout<<"1";
                }
                else
                {
                    
                }
                
            }
            
        }
        
    }

}