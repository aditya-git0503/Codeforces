#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int count = 0;
 
    while(n--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
 
        a = a+b+c;
        if(a >= 2){
            count++;
        }
    }
    cout<<count;
}