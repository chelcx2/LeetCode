#include <bits/stdc++.h>
using namespace std;

class ParkingSystem {
private:
    int num_b = 0, num_m = 0, num_s = 0;
    const int BIG = 1, MEDIUM = 2, SMALL = 3;
public:
    ParkingSystem(int big, int medium, int small) {
        num_b = big;
        num_m = medium;
        num_s = small;
    }
    
    bool addCar(int carType) {
        if (carType == BIG) {
            if (num_b > 0) {
                num_b--;
                return true;
            }
            return false;
        }
        else if (carType == MEDIUM) {
            if (num_m > 0) {
                num_m--;
                return true;
            }
            return false;
        }
        else {
            if (num_s > 0) {
                num_s--;
                return true;
            }
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main() {
    ParkingSystem* obj = new ParkingSystem(1, 1, 0);
    vector<int> car = {1, 2, 3, 1};
    for (const int c: car) {
        cout << obj->addCar(c) << " ";
    }
    cout << "\n";
    return 0;
}