#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
        int check = a[0];
        bool yes = true;
        for(int i=0; i<n; i++) {
            if(a[i] != check) {
                yes = false;
                break;
            }
        }
        if(yes) {
            cout << "-1" << endl;
            continue;
        } 
 
        check = a[n-1];
        vector<int> b;
        vector<int> c;
 
        for(int i=n-1; i>=0; i--){
            if(a[i] == check) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }
 
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i=0; i<b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;
        for(int i=0; i<c.size(); i++) {
            cout << c[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}