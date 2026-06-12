#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        unordered_map<int, int> freq;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        if (freq.size() > 2) {
            cout << "NO
";
        }
        else if (freq.size() == 1) {
            cout << "YES
";
        }
        else {
            auto it = freq.begin();
            int f1 = it->second;
            ++it;
            int f2 = it->second;
 
            if (abs(f1 - f2) <= 1)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
 
    return 0;
}