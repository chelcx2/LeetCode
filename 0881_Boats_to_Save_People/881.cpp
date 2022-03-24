#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end(), greater<int>());
        int first = 0, last = people.size() - 1, ans = 0;
        while (true) {
            if (people[first] + people[last] <= limit) {
                ans++;
                first++;
                last--;
            }
            else {
                ans++;
                first++;
            }
            if (first > last) {
                break;
            }
            if (first == last) {
                ans++;
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> v = {5, 1, 4, 2};
    int lim = 6;
    cout << a.numRescueBoats(v, lim) << "\n";
    return 0;
}