#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for (vector<int> v: image) {
            reverse(v.begin(), v.end());
            vector<int> tmp;
            // for (vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i) {
            for (const auto pix: v) {
                // if (*i == 1)
                if (pix == 1)
                    tmp.push_back(0);
                else 
                    tmp.push_back(1);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> im1 = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> im2 = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    Solution a;
    for (const auto v: a.flipAndInvertImage(im1)) {
        for (const auto pix: v) {
            cout << pix << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (const auto v: a.flipAndInvertImage(im2)) {
        for (const auto pix: v) {
            cout << pix << " ";
        }
        cout << "\n";
    }
    return 0;
}