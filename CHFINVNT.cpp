#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--) {
        int n,k;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        int current = 0;
        for(int i = 0; i < n; i++) {
            current += arr[i];
            if (current > k) {
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}