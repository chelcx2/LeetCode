#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool is_leap(int year) {
        return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
    }
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        vector<int> acc_day = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int ans = acc_day[month] + day;
        
        return is_leap(year) && month > 2 ? ans + 1 : ans;
    }
};

int main() {
    Solution a;
    cout << a.dayOfYear("2019-01-09") << "\n";
    cout << a.dayOfYear("2019-02-10") << "\n";
    return 0;
}