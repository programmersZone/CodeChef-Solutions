#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long mult(long long n)
{
    long long product = 1;
 
    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
        if (product == 0)
        {
            return 0;
        }
        
    }
 
    return product;
}

long long fact(long long n) {
    long long digit = 0;
    long long ans = 1;
    while (n != 0)
    {
        digit++;
        n = n / 10;
    }
    for (int i = 2; i <= digit; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n;
        cin>>n;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (mult(i) >= fact(i))
            {
                ans++;
            }
            
        }
        cout<<ans<<endl;
    }
}