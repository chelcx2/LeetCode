#include <bits/stdc++.h>
using namespace std;
class MyHashSet {
private:
    set<int> hashset;
public:
    MyHashSet() {
        hashset.clear();
    }
    
    void add(int key) {
        hashset.insert(key);
    }
    
    void remove(int key) {
        hashset.erase(key);
    }
    
    bool contains(int key) {
        return hashset.count(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

int main() {
    MyHashSet* obj = new MyHashSet();
    obj->add(1);
    obj->add(2);
    cout << obj->contains(1) << " " << obj->contains(3) << " ";
    obj->add(2);
    cout << obj->contains(2) << " ";
    obj->remove(2);
    cout << obj->contains(2) << " ";
    return 0;
}