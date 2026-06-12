#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        bool found = false;
 
        for (int i = 0; i + 2 < n; i++) {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                cout << 2 << '
';
                found = true;
                break;
            }
        }
 
        if (found) continue;
 
        int cnt = 0;
        for (char c : s) {
            if (c == '.') cnt++;
        }
 
        cout << cnt << '
';
    }
 
    return 0;
}