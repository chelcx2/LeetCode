#include <bits/stdc++.h>
using namespace std;

int dis_square(vector<int>& p, vector<int>& q) {
    return (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);
}

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int> dis;
        dis.insert(dis_square(p1, p2));
        dis.insert(dis_square(p1, p3));
        dis.insert(dis_square(p1, p4));
        dis.insert(dis_square(p2, p3));
        dis.insert(dis_square(p2, p4));
        dis.insert(dis_square(p3, p4));
        return dis.size() == 2 && *(dis.rbegin()) == *(dis.begin()) * 2;
    }
};

int main() {
    vector<int> p1 = {0, 0}, p2 = {1, 1}, p3 = {1, 0}, p4 = {0, 1};
    vector<int> q1 = {0, 0}, q2 = {1, 1}, q3 = {1, 0}, q4 = {0, 12};
    vector<int> r1 = {1, 0}, r2 = {-1, 0}, r3 = {0, 1}, r4 = {0, -1};
    Solution a;
    cout << a.validSquare(p1, p2, p3, p4) << "\n" << a.validSquare(q1, q2, q3, q4) << "\n" << a.validSquare(r1, r2, r3, r4);
    return 0;
}