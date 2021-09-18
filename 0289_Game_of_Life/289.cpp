#include <bits/stdc++.h>
using namespace std;
int count(vector<vector<int>> &board, int r, int c)
{
    int cnt = 0;
    vector<int> neighbors;
    if (board.size() == 1 && board[0].size() == 1)
        return 0;
    if (r - 1 >= 0)
    {
        neighbors.push_back(board[r - 1][c]); // up
        if (c - 1 >= 0)
            neighbors.push_back(board[r - 1][c - 1]); // upper left

        if (c + 1 <= board[0].size() - 1)
            neighbors.push_back(board[r - 1][c + 1]); // upper right
    }
    if (r + 1 <= board.size() - 1)
    {
        neighbors.push_back(board[r + 1][c]); //bottom
        if (c - 1 >= 0)
            neighbors.push_back(board[r + 1][c - 1]); // bottom left

        if (c + 1 <= board[0].size() - 1)
            neighbors.push_back(board[r + 1][c + 1]); // bottom right
    }
    if (c - 1 >= 0)
        neighbors.push_back(board[r][c - 1]); // left

    if (c + 1 <= board[0].size() - 1)
        neighbors.push_back(board[r][c + 1]); // right

    // printf("\ncenter (r=%d, c=%d) has %d neighbors: ", r, c, neighbors.size());
    // for (int i = 0; i < neighbors.size(); i++)
    //     printf("%d ", neighbors[i]);
    for (int i = 0; i < neighbors.size(); i++)
    {
        if (neighbors[i] == 1)
            cnt++;
    }
    return cnt;
}
class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        vector<vector<int>> next_state = board;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                int live_neighbors = count(board, i, j);
                if (board[i][j] == 0)
                {
                    if (live_neighbors == 3)
                        next_state[i][j] = 1;
                }
                else
                {
                    if (live_neighbors < 2 || live_neighbors > 3)
                        next_state[i][j] = 0;
                }
            }
        }
        board = next_state;
        // for (int i = 0; i < next_state.size(); i++)
        // {
        //     for (int j = 0; j < next_state[i].size(); j++)
        //         cout << board[i][j] << " ";
        //     cout << "\n";
        // }
    }
};
int main()
{
    Solution a;
    vector<vector<int>> test = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    vector<vector<int>> test2 = {{1, 1}, {1, 0}};
    a.gameOfLife(test);
    a.gameOfLife(test2);
    return 0;
}