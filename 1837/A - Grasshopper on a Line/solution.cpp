#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,k;
        cin >> x >> k;
        x = abs(x);
        k = abs(k);
 
        if(x%k){
            cout<<"1"<<endl;
            cout<<x<<endl;
            continue;
        }
 
        else{
            cout<<"2"<<endl;
            cout<<"1"<<" "<<x-1<<endl;
        }
    }
    return 0;
}