#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> h(n);
        for(int i=0; i<n; i++){
            cin>>h[i];
        }
        
        int maxi = h[0];
        int mini = h[0];
 
        for(int i : h){
            maxi = max(maxi, i);
            mini = min(mini, i);
        }
 
        cout<<(maxi+1) - mini<<endl;
    }
 
    return 0;
}