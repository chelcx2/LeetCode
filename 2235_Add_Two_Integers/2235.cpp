#include <iostream>
using namespace std;
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
int main() {
    Solution a;
    cout << a.sum(-10, 4) << "\n";
    return 0;
}