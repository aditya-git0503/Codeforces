#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
 
        bool ok = true;
 
        for (int r = 0; r < k; r++) {
            int ones = 0;
 
            for (int i = r; i < n; i += k) {
                if (s[i] == '1') ones++;
            }
 
            if (ones & 1) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES" : "NO") << '
';
    }
 
    return 0;
}