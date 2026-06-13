    #include <bits/stdc++.h>
    using namespace std;
 
    int main() {
        int t;
        cin >> t;
        while (t--) {
            int a,b,c,d;
            cin >> a >> b >> c >> d;
 
            if(d < b){
                cout<<"-1"<<endl;
                continue;
            }
 
            a += (d-b);
            if(a < c){
                cout<<"-1"<<endl;
                continue;
            }
 
            cout<<(d-b) + (a - c)<<endl;
        }
        return 0;
    }