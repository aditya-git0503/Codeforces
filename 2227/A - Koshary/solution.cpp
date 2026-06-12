#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
 
    for(int i=1; i<=t; i++){
        int a,b;
        cin>>a;
        cin>>b;
 
        if((a&1) && (b&1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}