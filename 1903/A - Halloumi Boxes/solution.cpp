#include <bits/stdc++.h>
using namespace std;
 
bool check(vector<int> a)
{
    for (int i = 0; i < a.size()-1; i++)
    {
        if (a[i] > a[i+1])
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        if (k == 1)
        {
            if (check(a))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}