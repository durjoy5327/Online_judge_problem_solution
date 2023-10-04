#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // vector<vector<char>> test;
        int points = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // cin >> test[i][j];
                char x;
                cin >> x;
                if (x == 'X')
                {
                    if (i == 0 || j == 0 || j == 9 || i == 9)
                    {
                        points += 1;
                    }
                    else if (((i == 1 || i == 8) && (j > 0 && j < 9)) || ((j == 1 || j == 8) && (i > 0 && i < 9)))
                    {
                        points += 2;
                    }
                    else if (((i == 2 || i == 7) && (j > 1 && j < 8)) || ((j == 2 || j == 7) && (i > 1 && i < 8)))
                    {
                        points += 3;
                    }
                    else if (((i == 3 || i == 6) && (j > 2 && j < 7)) || ((j == 3 || j == 6) && (i > 2 && i < 7)))
                    {
                        points += 4;
                    }
                    else if (((i >= 4 || i <= 5) && (j > 3 && j < 6)) || ((j >= 4 || j <= 5) && (i > 3 && i < 6)))
                    {
                        points += 5;
                    }
                }
            }
        }
        cout << points << endl;
    }
}