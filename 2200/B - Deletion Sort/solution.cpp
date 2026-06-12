#include <bits/stdc++.h>
using namespace std;
 
bool check(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}
 
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
 
        if (check(a)) {
            cout << n << '
';
            continue;
        }
 
        cout << 1 << '
';
    }
 
    return 0;
}