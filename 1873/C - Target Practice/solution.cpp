#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int score = 0;
        vector<string> board(10);
 
        for(int i=0; i<10; i++){
            cin>> board[i];
        }
 
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                int d = min({i, j, 9-i, 9-j});
                if(board[i][j] == 'X'){
                    score += (d + 1);
                }
            }
        }
        cout << score << endl;
    }
}