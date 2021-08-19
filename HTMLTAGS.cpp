#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string n;
        cin.ignore();
        cin>>n;
        bool test = true;
        int last = n.size();
        if (n[0] != '<' || n[1] != '/' || n[last-1] != '>' || last <=3 ){
            test = false;
        }
        for (int i = 2; i < last-2; i++)
        {
            if ((n[i] >= 97 && n[i] <= 122) || (n[i] >= 48 && n[i] <= 57)) {
                test = true;
                break;
            } else{
                test = false;
            }
        }
        for (int i = 2; i < last-2; i++)
        {
            if (n[i] < 97 || n[i]> 122 && n[i] != 32) {
                test = false;
                break;
            }
        }
        if (test)
        {
            cout<<"Success"<<endl;
        }
        else
        {
            cout<<"Error"<<endl;
        }
        
        
        
    }
}