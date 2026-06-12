#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--){
        int n, x;
        cin >> n;
        cin >> x;
 
        vector<int> gas(n);
        for(int i=0; i<n; i++){
            cin>>gas[i];
        }
        int ans = gas[0];
 
        for(int i=1; i<n; i++){
            ans = max(ans, gas[i] - gas[i-1]);
        }
 
        ans = max(ans, 2 * (x-gas[n-1]));
 
        cout<<ans<<endl;
    }
}