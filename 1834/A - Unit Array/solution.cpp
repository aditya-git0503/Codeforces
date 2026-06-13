    #include <bits/stdc++.h>
    using namespace std;
 
    int main() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
 
            int neg = 0;
            for (int x : a) if (x == -1) neg++;
 
            int ops = 0;
 
            // Fix product: need even number of -1s
            if (neg % 2 == 1) {
                neg--;
                ops++;
            }
 
            while (neg > n - neg) {
                neg -= 2;
                ops += 2;
            }
 
            cout << ops << "
";
        }
        return 0;
    }