#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, m;
        string x, s;
 
        cin >> n >> m;
        cin >> x >> s;
 
        int ans = 0;
        bool found = false;
 
        for (int i = 0; i <= 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << ans << '
';
                found = true;
                break;
            }
 
            x += x;
            ans++;
        }
 
        if (!found)
        {
            cout << -1 << '
';
        }
    }
 
    return 0;
}