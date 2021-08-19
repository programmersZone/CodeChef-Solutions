#include<bits/stdc++.h>
using namespace std;

int main() {
    int withdrawal_amt;
    float current_balance;

    cin>>withdrawal_amt>>current_balance;

    if (withdrawal_amt + 0.5 > current_balance)
    {
        cout<<fixed<<setprecision(2)<<current_balance<<endl;
    }
    else if (withdrawal_amt % 5 != 0) {
        cout<<fixed<<setprecision(2)<<current_balance<<endl;
    }
    else
    {
        float deduct = withdrawal_amt + 0.5;
        cout<<fixed<<setprecision(2)<<current_balance-deduct<<endl;
    }
    

}