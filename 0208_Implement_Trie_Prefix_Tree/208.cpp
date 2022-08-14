#include <bits/stdc++.h>
using namespace std;

class Trie {
private:
    vector<string> words;

public:
    Trie() {
        words.clear();
    }
    
    void insert(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        return find(words.begin(), words.end(), word) != words.end() ? true : false;
    }
    
    bool startsWith(string prefix) {
        for (string &w: words) {
            if (w.find(prefix) == 0)
                return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main() {
    Trie* obj = new Trie();
    obj->insert("apple");
    cout << obj->search("apple") << " " << obj->search("app") << " " << obj->startsWith("app") << " ";
    obj->insert("app");
    cout << obj->search("app") << "\n";
    return 0;
}