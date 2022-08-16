#include <bits/stdc++.h>
#define BYTE1 1
#define BYTE2 2
#define BYTE3 3
#define BYTE4 4
#define SUCCESSOR 5
#define INVALID 6

using namespace std;
class Solution {
public:
    int calc_byte(int& data) {
        int mask1 = 1 << 7, mask2 = 1 << 6, mask3 = 1 << 5;
        int mask4 = 1 << 4, mask5 = 1 << 3;
        if (!(mask1 & data))
            return BYTE1;
        if (mask1 & data && !(mask2 & data))
            return SUCCESSOR;
        if (mask1 & data && mask2 & data && !(mask3 & data))
            return BYTE2;
        if (mask1 & data && mask2 & data && mask3 & data && !(mask4 & data))
            return BYTE3;
        if (mask1 & data && mask2 & data && mask3 & data && mask4 & data && !(mask5 & data))
            return BYTE4;
        return INVALID;
    }

    bool validUtf8(vector<int>& data) {
        int suc_needed = 0;
        for (int character: data) {
            int num_of_bytes = calc_byte(character);
            // printf("num of bytes = %d, suc needed = %d\n", num_of_bytes, suc_needed);
            if (!suc_needed) {
                switch (num_of_bytes) {
                    case BYTE1: continue; break;
                    case BYTE2: suc_needed = 1; break;
                    case BYTE3: suc_needed = 2; break;
                    case BYTE4: suc_needed = 3; break;
                    default: return false;
                }
            }
            else {
                if (num_of_bytes == SUCCESSOR)
                    suc_needed--;
                else
                    return false;
            }
        }
        return !suc_needed ? true : false;
    }
};

int main() {
    Solution a;
    vector<int> d1 = {197, 130, 1}, d2 = {235, 140, 4};
    cout << a.validUtf8(d1) << " " << a.validUtf8(d2) << "\n";
    // cout << a.validUtf8(d2) << "\n";
    return 0;
}
