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
 
            int ans = 0;
            int l = 0;
            int r = 0;
 
            while(r < n){
                if(a[r] == 0){
                    ans = max(ans, r - l + 1);
                    r++;
                }
                else{
                    l = r + 1;
                    r++;
                }
            }
 
            cout<< ans << endl;
        }
        return 0;
    }