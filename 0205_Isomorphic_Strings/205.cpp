#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> string_map1, string_map2;
        for (int i = 0; i < s.length(); i++) {
            if (string_map1.find(s[i]) == string_map1.end()) {
                // key doesn't exist 
                string_map1[s[i]] = t[i];
            }
            else {
                if (string_map1[s[i]] != t[i]) 
                    return false;
            }
        }
        
        for (int i = 0; i < t.length(); i++) {
            if (string_map2.find(t[i]) == string_map2.end()) {
                // key doesn't exist 
                string_map2[t[i]] = s[i];
            }
            else {
                if (string_map2[t[i]] != s[i]) 
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution a;
    cout << a.isIsomorphic("egg", "add") << " " << a.isIsomorphic("badc", "baba") << "\n";
    return 0;
}