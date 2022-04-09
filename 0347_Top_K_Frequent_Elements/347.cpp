#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> times;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for (int i: nums)
            times[i]++;
        for (map<int, int>::iterator it = times.begin(); it != times.end(); ++it) {
            // cout << it->first << " " << it->second << "\n";
            pq.push({it->second, it->first});
        }
        for (int _ = 0; _ < k; ++_) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> n = {1, 1, 1, 2, 2, 3};
    for (int num: a.topKFrequent(n, 2)) 
        cout << num << " ";
    cout << "\n";
    return 0;
}