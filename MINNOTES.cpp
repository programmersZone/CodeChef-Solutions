#include <bits/stdc++.h>
using namespace std;

bool isPrime(int temp){
    if (temp == 1)
    {
        return true;
    }
    
    for (int i = 2; i * i < temp; i++)
    {
        if (temp % i == 0)
        {
            return true;
        }
    }
    return false;
}

int gcdi(int a, int b){
    while (a != 0)
    {
        int temp = b % a;
        b = a;
        a = temp;
    }
    return b;
}

int ans(int arr[],int n){
    int primeIndx = -2;
    int prime = -5;
    int gcd;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            primeIndx = i;
            prime = arr[i];
        }
    }
    if (primeIndx == 0)
    {
        gcd = arr[1];
    }
    else{
        gcd = arr[0];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i == primeIndx)
        {
            continue;
        }
        gcd = gcdi(gcd,arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i == primeIndx)
        {
            continue;
        }
        ans += arr[i] / gcd;
    }
    return ans + 1;
}

int answithzero(int arr[], int n){
    int gcd = arr[0];
    int ans = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        gcd = gcdi(gcd,arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] / gcd;
    }
    return ans + 1;
}

int minnotes(int arr[],int n,int maxi,int prime,int sum){
    if (n==0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (prime == 0)
    {
        return answithzero(arr,n);
    }
    else if (prime == 1)
    {
        return ans(arr,n);
    }
    else {
        return (sum - maxi);
    }
    
}


int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin>>n;
        int arr[n];
        int maxi = -9;
        int prime = 0;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
            sum+=temp;
            maxi = max(maxi,temp);
            if (isPrime(temp))
            {
                prime++;
            }
        }
        cout<<minnotes(arr,n,maxi,prime,sum)<<endl;
    }
}