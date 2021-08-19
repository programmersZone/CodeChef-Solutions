#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int p1,p2,csum1 = 0, csum2 = 0, ans, max = INT_MIN;

    while (n--)
    {
        cin>>p1>>p2;

        csum1 += p1;
        csum2 += p2;

        if (abs(csum2 - csum1) > max)
        {
            max = abs(csum1 - csum2);
            if (csum1 > csum2)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
            
            
        }
        
    }
    cout<<ans<<" "<<max<<endl;
    
}