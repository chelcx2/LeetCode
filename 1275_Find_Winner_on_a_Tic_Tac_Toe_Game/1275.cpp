#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<string> board = {"   ", "   ", "   "};
        for (int i = 0; i < moves.size(); i++)
        {
            int r = moves[i][0], c = moves[i][1];
            board[r][c] = i % 2 == 0 ? 'X' : 'O';
        }
        // for (int i = 0; i < board.size(); i++)
        // {
        //     for (int j = 0; j < board[i].size(); j++)
        //         cout << board[i][j] << " ";
        //     cout << "\n";
        // }

        for (int r = 0; r < 3; r++)
        {
            if (board[r] == "XXX")
                return "A";
            if (board[r] == "OOO")
                return "B";
        }

        for (int c = 0; c < 3; c++)
        {
            if (board[0][c] == board[1][c] && board[1][c] == board[2][c] && board[0][c] != ' ')
                return board[0][c] == 'X' ? "A" : "B";
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
            return board[1][1] == 'X' ? "A" : "B";
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
            return board[1][1] == 'X' ? "A" : "B";

        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                if (board[r][c] == ' ')
                    return "Pending";
            }
        }
        return "Draw";
    }
};
int main()
{
    vector<vector<int>> m1 = {{0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}};
    vector<vector<int>> m2 = {{0, 0}, {1, 1}, {0, 1}, {0, 2}, {1, 0}, {2, 0}};
    vector<vector<int>> m3 = {{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2}, {2, 1}, {0, 1}, {0, 2}, {2, 2}};
    vector<vector<int>> m4 = {{0, 0}, {1, 1}};
    Solution a;
    cout << a.tictactoe(m1) << " " << a.tictactoe(m2) << " " << a.tictactoe(m3) << " " << a.tictactoe(m4) << "\n";
    // cout << a.tictactoe(m4);
    return 0;
};
