#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> table = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
                                "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", 
                                "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", 
                                "-.--","--.."};
        set<string> diff;
        for (const string w: words) {
            string morse = "";
            for (const char ch: w) {
                morse += table[ch - 'a'];
            }
            diff.insert(morse);
        }

        // for (string str: diff)  
        //     cout << str << " ";
        return diff.size();
    }
};

int main() {
    vector<string> t1 = {"gin","zen","gig","msg"};
    Solution a;
    cout << a.uniqueMorseRepresentations(t1);
    return 0;
}